// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSACCOUNTMONITOR_H
#define VSACCOUNTMONITOR_H

@class NSString, ACMonitoredAccountStore;
@protocol ACMonitoredAccountStoreDelegateProtocol;

#import <Foundation/Foundation.h>


@interface VSAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ACMonitoredAccountStore *monitoredAccountStore; // ivar: _monitoredAccountStore
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_sendNotification;
-(void)accountCredentialChanged:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;


@end


#endif