// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTSINGLETESTRECIPE_H
#define PTSINGLETESTRECIPE_H



#import "PTTestRecipe.h"

@interface PTSingleTestRecipe : PTTestRecipe

@property (copy, nonatomic) id *action; // ivar: _action


+(id)recipeWithTitle:(id)arg0 action:(id)arg1 ;
// +(id)recipeWithTitle:(id)arg0 prepareBlock:(id)arg1 action:(unk)arg2 cleanupBlock:(id)arg3  ;
-(BOOL)_wantsEvent:(NSInteger)arg0 ;
-(void)_handleEvent:(NSInteger)arg0 ;
-(void)invalidate;


@end


#endif