// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BNPANGESTURESERVICEPROXY_H
#define _BNPANGESTURESERVICEPROXY_H

@class NSString;
@protocol BNPanGestureProxyPrivate, BNPanGestureProxyDelegate;

#import <Foundation/Foundation.h>

#import "BNPanGestureProxyAction.h"

@interface _BNPanGestureServiceProxy : NSObject <BNPanGestureProxyPrivate>



@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic, getter=_activePanGestureProxyAction, setter=_setActivePanGestureProxyAction:) BNPanGestureProxyAction *activePanGestureProxyAction; // ivar: _activePanGestureProxyAction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNPanGestureProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )translationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )velocityInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )visualTranslationInCoordinateSpace:(id)arg0 ;
-(void)sendAction;


@end


#endif