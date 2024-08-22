// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSKEYSYNCTRACKER_H
#define CKDPCSKEYSYNCTRACKER_H

@class NSString, NSDate, NSError, NSNumber;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKDPCSKeySyncTracker : NSObject

@property (nonatomic) BOOL KRSReturnedExistingIdentity; // ivar: _KRSReturnedExistingIdentity
@property (retain, nonatomic) NSString *accountDsid; // ivar: _accountDsid
@property (retain, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (nonatomic, getter=isManatee) BOOL manatee; // ivar: _manatee
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSUInteger state;
@property (retain, nonatomic) NSError *syncError; // ivar: _syncError
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // ivar: _syncGroup
@property (retain, nonatomic) NSNumber *syncStatus; // ivar: _syncStatus


-(void)waitOnSyncWithQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif