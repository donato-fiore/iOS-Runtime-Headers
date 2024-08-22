// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWTRANSITION_H
#define UIINPUTVIEWTRANSITION_H


#import <Foundation/Foundation.h>

#import "UIInputViewSet.h"

@interface UIInputViewTransition : NSObject {
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}


@property (readonly, nonatomic) UIInputViewSet *oldSet;


-(id)newSet;
-(void)postNotificationsForTransitionEnd;
-(void)postNotificationsForTransitionStart;


@end


#endif