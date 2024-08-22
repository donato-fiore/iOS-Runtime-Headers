// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDONOTDISTURBMETRIC_H
#define SBDONOTDISTURBMETRIC_H

@class SBFAnalyticsClient, NSString, DNDStateService;
@protocol DNDStateUpdateListener, SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBDoNotDisturbMetric : NSObject <DNDStateUpdateListener, SBFAnalyticsBackendEventHandling>



@property (readonly, nonatomic) SBFAnalyticsClient *analyticsClient; // ivar: _analyticsClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (readonly, nonatomic, getter=isDoNotDisturbActive) BOOL doNotDisturbActive; // ivar: _doNotDisturbActive
@property (copy, nonatomic) NSString *floatingBundleIdentifier; // ivar: _floatingBundleIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger location; // ivar: _location
@property (copy, nonatomic) NSString *primaryBundleIdentifier; // ivar: _primaryBundleIdentifier
@property (copy, nonatomic) NSString *sideBundleIdentifier; // ivar: _sideBundleIdentifier
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(id)_bundleIdentifierForElementWithLayoutRole:(NSInteger)arg0 fromContext:(id)arg1 ;
-(id)init;
-(id)initWithAnalyticsClient:(id)arg0 ;
-(void)dealloc;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif