// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERLAYOUTTRANSITIONNOTES_H
#define SBSWITCHERLAYOUTTRANSITIONNOTES_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherLayoutTransitionNotes : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) BOOL changingApps; // ivar: _changingApps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fromApp; // ivar: _fromApp
@property (readonly, weak, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, nonatomic) BOOL fromAppToHomeScreen; // ivar: _fromAppToHomeScreen
@property (readonly, nonatomic) BOOL fromHomeScreen; // ivar: _fromHomeScreen
@property (readonly, nonatomic) BOOL fromHomeScreenToApp; // ivar: _fromHomeScreenToApp
@property (readonly, nonatomic) BOOL fromManyApps; // ivar: _fromManyApps
@property (readonly, nonatomic) BOOL fromSwitcher; // ivar: _fromSwitcher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inApp; // ivar: _inApp
@property (readonly, weak, nonatomic) SBAppLayout *inAppLayout; // ivar: _inAppLayout
@property (readonly, nonatomic) BOOL inHomeScreen; // ivar: _inHomeScreen
@property (readonly, nonatomic) BOOL inManyApps; // ivar: _inManyApps
@property (readonly, nonatomic) BOOL inSwitcher; // ivar: _inSwitcher
@property (readonly, nonatomic) BOOL isHomeButtonInitiated; // ivar: _isHomeButtonInitiated
@property (readonly, nonatomic) BOOL isPIPRestore; // ivar: _isPIPRestore
@property (readonly, nonatomic) BOOL isSystemGesture; // ivar: _isSystemGesture
@property (readonly, nonatomic) BOOL movingFromManyApps; // ivar: _movingFromManyApps
@property (readonly, nonatomic) BOOL movingToManyApps; // ivar: _movingToManyApps
@property (readonly, nonatomic) BOOL movingToSingleApp; // ivar: _movingToSingleApp
@property (readonly, nonatomic) BOOL stableInAppOrMovingBetweenSingleApp; // ivar: _stableInAppOrMovingBetweenSingleApp
@property (readonly, nonatomic) BOOL stableInHomeScreen; // ivar: _stableInHomeScreen
@property (readonly, nonatomic) BOOL stableInSameApp; // ivar: _stableInSameApp
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFromPreviousState:(id)arg0 currentLayoutState:(id)arg1 transitionRequest:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif