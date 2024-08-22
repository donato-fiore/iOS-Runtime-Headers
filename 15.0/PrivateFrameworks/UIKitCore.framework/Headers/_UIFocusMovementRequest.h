// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSMOVEMENTREQUEST_H
#define _UIFOCUSMOVEMENTREQUEST_H

@class NSString;
@protocol _UIFocusUpdateRequesting;

#import <Foundation/Foundation.h>

#import "UIFocusAnimationCoordinator.h"
#import "_UIFocusMovementRequest.h"
#import "UIFocusSystem.h"
#import "_UIFocusItemInfo.h"
#import "_UIFocusInputDeviceInfo.h"
#import "_UIFocusMovementInfo.h"
#import "_UIFocusSearchInfo.h"
#import "UIWindow.h"

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting>



@property (readonly, nonatomic) BOOL allowsDeferral;
@property (readonly, nonatomic) BOOL allowsFocusRestoration;
@property (readonly, nonatomic) BOOL allowsFocusingCurrentItem;
@property (readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (retain, nonatomic) _UIFocusItemInfo *focusedItemInfo; // ivar: _focusedItemInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo; // ivar: _inputDeviceInfo
@property (retain, nonatomic) _UIFocusMovementInfo *movementInfo; // ivar: _movementInfo
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo
@property (nonatomic) BOOL shouldPerformHapticFeedback; // ivar: _shouldPerformHapticFeedback
@property (readonly, nonatomic) BOOL shouldPlayFocusSound;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindow *window; // ivar: _window


-(id)_requestByRedirectingRequestToFocusSystem:(id)arg0 ;
-(id)init;
-(id)initWithFocusSystem:(id)arg0 window:(id)arg1 ;


@end


#endif