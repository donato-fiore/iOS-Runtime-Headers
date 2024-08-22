// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNDONATIONAGENTLOGGER_H
#define _CNDONATIONAGENTLOGGER_H

@class NSString;
@protocol CNDonationAgentLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // ivar: _log_t
@property (readonly) Class superclass;


-(id)init;
-(void)acceptingConnectionFromProcess:(int)arg0 ;
-(void)acceptingDonations:(id)arg0 ;
-(void)agentDidHandleRequest:(SEL)arg0 ;
-(void)agentDidStart;
-(void)agentWillHandleRequest:(SEL)arg0 ;
-(void)agentWillStart;
-(void)agentWillStop;
-(void)beginRestorePersistedState;
-(void)contactsChangedNotificationEmailAddressesChanged:(BOOL)arg0 ;
-(void)contactsChangedNotificationFoundName:(BOOL)arg0 nameChanged:(BOOL)arg1 ;
-(void)couldNotRejectClusterIdentifier:(id)arg0 error:(id)arg1 ;
-(void)couldNotRejectDonationIdentifier:(id)arg0 error:(id)arg1 ;
-(void)couldNotRejectUnknownClusterIdentifier:(id)arg0 ;
-(void)couldNotRejectUnknownDonationIdentifier:(id)arg0 ;
-(void)couldNotRenewBecauseDonorError:(id)arg0 ;
-(void)couldNotRenewBecauseLoadingError:(id)arg0 ;
-(void)couldNotRenewBecauseNotADonorExtension:(id)arg0 ;
-(void)denyingRequestFromProcess:(int)arg0 ;
-(void)didDiscoverExtension:(id)arg0 ;
-(void)didDiscoverExtensions;
-(void)didDiscoverUnexpectedExtensionType:(id)arg0 ;
-(void)didFailToDiscoverExtensions:(id)arg0 ;
-(void)didListRejections;
-(void)didRejectClusterIdentifier:(id)arg0 ;
-(void)didRejectDonationIdentifier:(id)arg0 ;
-(void)didRemoveAllRejections;
-(void)didRenewValue:(id)arg0 untilDate:(id)arg1 ;
-(void)donationServiceDidStart;
-(void)donationServiceWillStart;
-(void)donationServiceWillStop;
-(void)endRestorePersistedState;
-(void)featureDidDisable;
-(void)featureDidEnable;
-(void)featureNotEnabled:(SEL)arg0 ;
-(void)featureWillDisable;
-(void)featureWillEnable;
-(void)foundUnhashableValue:(id)arg0 ;
-(void)maintenanceServiceDidStart;
-(void)maintenanceServiceWillStart;
-(void)maintenanceServiceWillStop;
-(void)preExpiredDonations:(id)arg0 ;
-(void)willDiscoverExtensions;
-(void)willListRejections;
-(void)willLoadExtensionVersions;
-(void)willRejectClusterIdentifier:(id)arg0 ;
-(void)willRejectDonationIdentifier:(id)arg0 ;
-(void)willRemoveAllRejections;
-(void)willRenewValues:(id)arg0 withDonor:(id)arg1 ;
-(void)willSaveExtensionVersions;


@end


#endif