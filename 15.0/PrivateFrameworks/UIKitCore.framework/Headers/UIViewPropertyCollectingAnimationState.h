// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVIEWPROPERTYCOLLECTINGANIMATIONSTATE_H
#define UIVIEWPROPERTYCOLLECTINGANIMATIONSTATE_H



#import "UIViewInProcessAnimationState.h"
#import "_UICompoundObjectMap.h"

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState

@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties; // ivar: _capturedProperties


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(id)init;


@end


#endif