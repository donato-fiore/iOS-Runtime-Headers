// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTTOGGLETESTRECIPE_H
#define PTTOGGLETESTRECIPE_H



#import "PTTestRecipe.h"

@interface PTToggleTestRecipe : PTTestRecipe

@property (readonly, nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (copy, nonatomic) id *toggleAction; // ivar: _toggleAction


// +(id)recipeWithTitle:(id)arg0 prepareBlock:(id)arg1 toggleAction:(unk)arg2 cleanupBlock:(id)arg3  ;
+(id)recipeWithTitle:(id)arg0 toggleAction:(id)arg1 ;
-(BOOL)_wantsEvent:(NSInteger)arg0 ;
-(void)_activate;
-(void)_deactivate;
-(void)_handleEvent:(NSInteger)arg0 ;
-(void)invalidate;


@end


#endif