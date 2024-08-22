// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECEXCHANGEACCOUNT_H
#define ECEXCHANGEACCOUNT_H

@class NSString, NSDate;


#import "ECAccount.h"

@interface ECExchangeAccount : ECAccount

@property (copy, nonatomic) NSString *folderHierarchySyncState;
@property (copy, nonatomic) NSString *inboxMailboxName;
@property (copy, nonatomic) NSString *journalMailboxName;
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate


+(id)standardPorts;
+(id)standardSSLPorts;
-(NSInteger)defaultPortNumber;
-(NSInteger)defaultSecurePortNumber;


@end


#endif