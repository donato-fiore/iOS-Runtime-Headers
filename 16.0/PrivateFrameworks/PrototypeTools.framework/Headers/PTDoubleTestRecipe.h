// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTDOUBLETESTRECIPE_H
#define PTDOUBLETESTRECIPE_H



#import "PTTestRecipe.h"

@interface PTDoubleTestRecipe : PTTestRecipe

@property (copy, nonatomic) id *decreaseAction; // ivar: _decreaseAction
@property (copy, nonatomic) id *increaseAction; // ivar: _increaseAction


// +(id)recipeWithTitle:(id)arg0 increaseAction:(id)arg1 decreaseAction:(unk)arg2  ;
// +(id)recipeWithTitle:(id)arg0 prepareBlock:(id)arg1 increaseAction:(unk)arg2 decreaseAction:(id)arg3 cleanupBlock:(unk)arg4  ;
-(BOOL)_wantsEvent:(NSInteger)arg0 ;
-(void)_handleEvent:(NSInteger)arg0 ;
-(void)invalidate;


@end


#endif