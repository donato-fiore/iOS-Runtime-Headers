// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYFLOWSKIPCONTROLLER_H
#define BYFLOWSKIPCONTROLLER_H

@class FLFollowUpController;
@protocol NSObject, BYCapabilities;

#import <Foundation/Foundation.h>


@interface BYFlowSkipController : NSObject {
    BOOL _basicFunctionalityEnabled_doNotAccessDirectly;
    FLFollowUpController *_followUpController_doNotAccessDirectly;
    id<NSObject> *_wfNetworkChangeObserver;
}


@property (retain, nonatomic) NSObject<BYCapabilities> *capabilities; // ivar: _capabilities


+(BOOL)_shouldObserveChangeFromNetworkSSID:(*id)arg0 ;
+(id)_actionForFlowSkipIdentifiers:(id)arg0 ;
+(id)_actionIdentifierForFlowSkipIdentifier:(id)arg0 ;
+(id)_flowSkipIdentifierFromActionIdentifier:(id)arg0 ;
+(id)_localizedStringListingFlowSkipIdentifiers:(id)arg0 ;
+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg0 ;
+(id)_supportedIdentifiers;
+(id)flowSkipIdentifiersFromFollowUpAction:(id)arg0 ;
+(id)sharedInstance;
+(void)_clearShouldObserveChangeFromNetworkSSID;
+(void)_setShouldObserveChangeFromNetworkSSID:(id)arg0 ;
-(BOOL)_isBasicFunctionalityEnabled;
-(BOOL)_isPasscodeSet;
-(NSInteger)_timeIntervalForFrequentNotifications;
-(NSInteger)_timeIntervalForNotifications;
-(NSInteger)_timeIntervalForWifiObserver;
-(NSInteger)_timeoutForWifiObserver;
-(id)_followUpController;
-(id)_pendingFollowUpItem;
-(id)getFlowSkipIdentifiers;
-(id)init;
-(void)_persistInitialNetworkSSID;
-(void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg0 previousFollowUpItem:(id)arg1 forceNotification:(BOOL)arg2 ;
-(void)_regsiterWiFiObserverActivityWithNeedsActivity:(BOOL)arg0 handlerQueue:(id)arg1 ;
-(void)_repostExistingFollowUpItemForcingNotification:(id)arg0 ;
-(void)cancelPendingFlows;
-(void)didCompleteFlow:(id)arg0 ;
-(void)didSkipFlow:(id)arg0 ;
-(void)observeFinishSetupTriggers;
-(void)passcodeDidChange;
-(void)registerActivities;
-(void)revisePendingFollowUpsForcingRepost:(BOOL)arg0 ;
-(void)setBasicFunctionalityEnabled:(BOOL)arg0 ;
-(void)unregisterActivities;


@end


#endif