// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPURCHASEANIMATIONDELEGATE_H
#define SUPURCHASEANIMATIONDELEGATE_H

@class UIView;

#import <Foundation/Foundation.h>


@interface SUPurchaseAnimationDelegate : NSObject {
    UIView *_view;
}




-(id)initWithView:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif