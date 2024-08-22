// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSTEMPLATEENVIRONMENT_H
#define CPSTEMPLATEENVIRONMENT_H

@class NSSet, NSString, NSXPCConnection, CARObserverHashTable, CARSessionStatus;
@protocol CPUINowPlayingObserving, CPTemplateProviding;

#import <Foundation/Foundation.h>


@interface CPSTemplateEnvironment : NSObject <CPUINowPlayingObserving>



@property (readonly, nonatomic) NSSet *allowedTemplateClasses; // ivar: _allowedTemplateClasses
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CARObserverHashTable *environmentObservers; // ivar: _environmentObservers
@property (readonly, nonatomic) BOOL hasAnyTemplateEntitlement;
@property (readonly, nonatomic) BOOL hasAudioEntitlement; // ivar: _hasAudioEntitlement
@property (readonly, nonatomic) BOOL hasChargingEntitlement; // ivar: _hasChargingEntitlement
@property (readonly, nonatomic) BOOL hasCommunicationEntitlement; // ivar: _hasCommunicationEntitlement
@property (readonly, nonatomic) BOOL hasDrivingTaskEntitlement; // ivar: _hasDrivingTaskEntitlement
@property (readonly, nonatomic) BOOL hasFuelingEntitlement; // ivar: _hasFuelingEntitlement
@property (readonly, nonatomic) BOOL hasNavigationEntitlement; // ivar: _hasNavigationEntitlement
@property (readonly, nonatomic) BOOL hasParkingEntitlement; // ivar: _hasParkingEntitlement
@property (readonly, nonatomic) BOOL hasPublicSafetyEntitlement; // ivar: _hasPublicSafetyEntitlement
@property (readonly, nonatomic) BOOL hasQuickOrderingEntitlement; // ivar: _hasQuickOrderingEntitlement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isNowPlayingApp; // ivar: _isNowPlayingApp
@property (readonly, nonatomic) BOOL isUserApplication; // ivar: _isUserApplication
@property (readonly, nonatomic) NSUInteger maximumClientHierarchyDepth;
@property (readonly, nonatomic) NSUInteger maximumTabs;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly, nonatomic) CARSessionStatus *sessionStatus; // ivar: _sessionStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsInstrumentCluster; // ivar: _supportsInstrumentCluster
@property (readonly, weak, nonatomic) NSObject<CPTemplateProviding> *templateProvider; // ivar: _templateProvider


-(BOOL)_applicationRecord:(id)arg0 supportsIntentWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)_applicationRecord:(id)arg0 supportsIntentWithIdentifierInExtensions:(id)arg1 error:(*id)arg2 ;
-(BOOL)applicationSupportsIntentWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithConnection:(id)arg0 templateProvider:(id)arg1 ;
-(void)addTemplateEnvironmentDelegate:(id)arg0 ;
-(void)nowPlayingManager:(id)arg0 didUpdateSnapshot:(id)arg1 ;


@end


#endif