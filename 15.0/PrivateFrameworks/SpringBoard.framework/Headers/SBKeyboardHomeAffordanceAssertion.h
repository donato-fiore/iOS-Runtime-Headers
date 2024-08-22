// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKEYBOARDHOMEAFFORDANCEASSERTION_H
#define SBKEYBOARDHOMEAFFORDANCEASSERTION_H

@class UIWindow;

#import <Foundation/Foundation.h>


@interface SBKeyboardHomeAffordanceAssertion : NSObject

@property (nonatomic) CGFloat additionalEdgeMargin; // ivar: _additionalEdgeMargin
@property (weak, nonatomic) UIWindow *sourceWindow; // ivar: _sourceWindow


+(id)assertionForGestureWindow:(id)arg0 ;
-(id)initWithGestureWindow:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif