// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSUPDATEREQUEST_H
#define _UIFOCUSUPDATEREQUEST_H

@class NSString;
@protocol _UIFocusUpdateRequesting, NSCopying, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "UIFocusAnimationCoordinator.h"
#import "UIFocusSystem.h"
#import "_UIFocusInputDeviceInfo.h"

@interface _UIFocusUpdateRequest : NSObject <_UIFocusUpdateRequesting, NSCopying>



@property (nonatomic) BOOL allowsDeferral; // ivar: _allowsDeferral
@property (nonatomic) BOOL allowsFocusRestoration; // ivar: _allowsFocusRestoration
@property (nonatomic) BOOL allowsFocusingCurrentItem; // ivar: _allowsFocusingCurrentItem
@property (retain, nonatomic) UIFocusAnimationCoordinator *animationCoordinator; // ivar: _animationCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *environment; // ivar: _environment
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) BOOL isFocusRemovalRequest; // ivar: _isFocusRemovalRequest
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (nonatomic) BOOL shouldPlayFocusSound; // ivar: _shouldPlayFocusSound
@property (readonly) Class superclass;


+(id)requestForRemovingFocusInFocusSystem:(id)arg0 ;
-(BOOL)canMergeWithRequest:(id)arg0 ;
-(BOOL)isValidInFocusSystem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithFocusSystem:(id)arg0 environment:(id)arg1 ;
-(id)requestByMergingWithRequest:(id)arg0 ;
-(id)requestByRedirectingRequestToEnvironment:(id)arg0 ;
-(id)requestByRedirectingRequestToNextContainerEnvironment;
-(void)cacheCurrentFocusSystem;


@end


#endif