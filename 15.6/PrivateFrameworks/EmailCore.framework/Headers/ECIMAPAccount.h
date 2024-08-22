// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECIMAPACCOUNT_H
#define ECIMAPACCOUNT_H

@class NSDate;


#import "ECAccount.h"

@interface ECIMAPAccount : ECAccount

@property (nonatomic) BOOL compactWhenClosingMailboxes;
@property (copy, nonatomic) NSDate *dateOfLastSync; // ivar: _dateOfLastSync
@property (nonatomic) NSInteger daysBetweenSyncs;
@property (nonatomic) BOOL hasServerDefinedAllMailMailbox;
@property (nonatomic) BOOL hasServerDefinedArchiveMailbox;
@property (nonatomic) BOOL hasServerDefinedDraftsMailbox;
@property (nonatomic) BOOL hasServerDefinedJunkMailbox;
@property (nonatomic) BOOL hasServerDefinedSentMailbox;
@property (nonatomic) BOOL hasServerDefinedTrashMailbox;
@property (nonatomic) BOOL ignoreServerDefinedArchiveMailbox;
@property (nonatomic) BOOL ignoreServerDefinedDraftsMailbox;
@property (nonatomic) BOOL ignoreServerDefinedJunkMailbox;
@property (nonatomic) BOOL ignoreServerDefinedSentMailbox;
@property (nonatomic) BOOL ignoreServerDefinedTrashMailbox;
@property (nonatomic) BOOL needsGmailLablesCleanup;
@property (nonatomic) BOOL queriedUserToSetPathPrefix;
@property (nonatomic) BOOL shouldUseGmailLabelStores;
@property (readonly, nonatomic) BOOL shouldUseGmailLabelStoresIsSet;


+(id)standardPorts;
+(id)standardSSLPorts;
-(NSInteger)defaultPortNumber;
-(NSInteger)defaultSecurePortNumber;
-(id)_hostnameFromParentAccount:(id)arg0 ;
-(id)portNumberObject;
-(id)usesSSLObject;
-(void)clearDaysBetweenSyncs;
-(void)clearQueriedUserToSetPathPrefix;


@end


#endif