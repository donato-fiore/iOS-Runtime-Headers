// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBGATEWAYMANAGER_H
#define PBBGATEWAYMANAGER_H

@class NSString, NSArray, NSDateComponents, DNDGlobalConfigurationService, BBSettingsGateway;
@protocol DNDGlobalConfigurationServiceListener, PBBGatewayManagerDelegate;

#import <Foundation/Foundation.h>


@interface PBBGatewayManager : NSObject <DNDGlobalConfigurationServiceListener>



@property (readonly, nonatomic) NSString *allowedGroupName; // ivar: _allowedGroupName
@property (retain, nonatomic) NSArray *bbSections; // ivar: _bbSections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBBGatewayManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDateComponents *dndFromComponents; // ivar: _dndFromComponents
@property (readonly, nonatomic) NSDateComponents *dndToComponents; // ivar: _dndToComponents
@property (readonly, nonatomic) NSUInteger doNotDisturbPrivilegedSenderType; // ivar: _doNotDisturbPrivilegedSenderType
@property (readonly, nonatomic) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier; // ivar: _doNotDisturbPrivilegedSenderTypeGroupIdentifier
@property (retain, nonatomic) DNDGlobalConfigurationService *globalConfigurationService; // ivar: _globalConfigurationService
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScheduled; // ivar: _isScheduled
@property (nonatomic) NSUInteger repeatedCallsEnabled; // ivar: _repeatedCallsEnabled
@property (retain, nonatomic) BBSettingsGateway *settingsGateway; // ivar: _settingsGateway
@property (readonly) Class superclass;


+(id)dateComponentsFromDNDScheduleTime:(id)arg0 ;
+(id)sharedManager;
-(BOOL)pairSyncEnabled;
-(BOOL)pairSyncStateEditable;
-(BOOL)repeatedCalls;
-(id)init;
-(void)dealloc;
-(void)globalConfigurationService:(id)arg0 didReceiveUpdatedPairSyncState:(NSUInteger)arg1 ;
-(void)loadBBSections;
-(void)loadDNDState;
-(void)setPairSyncEnabled:(BOOL)arg0 ;


@end


#endif