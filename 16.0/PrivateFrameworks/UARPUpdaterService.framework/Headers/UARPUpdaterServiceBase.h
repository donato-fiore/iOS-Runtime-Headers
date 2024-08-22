// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPUPDATERSERVICEBASE_H
#define UARPUPDATERSERVICEBASE_H

@protocol UARPUpdaterService;

#import <Foundation/Foundation.h>


@interface UARPUpdaterServiceBase : NSObject <UARPUpdaterService>





-(id)init;
-(void)bsdNotificationReceived:(id)arg0 ;
-(void)consentReceived:(id)arg0 ;
-(void)consentReceivedPostLogoutMode:(id)arg0 ;
-(void)dasActivityReceived:(id)arg0 ;
-(void)disabledProductIdentifiers:(id)arg0 ;
-(void)eaRuleMatched:(id)arg0 ;
-(void)getBSDNotificationsListWithReply:(id)arg0 ;
-(void)getDASActivityListWithReply:(id)arg0 ;
-(void)getIsBusyStatusWithReply:(id)arg0 ;
-(void)getMatchingServicesListWithReply:(id)arg0 ;
-(void)ioKitRuleMatched:(id)arg0 ;


@end


#endif