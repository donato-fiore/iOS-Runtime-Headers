// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEPERSISTENCESTATISTICS_IOS_H
#define MFMESSAGEPERSISTENCESTATISTICS_IOS_H

@class EDMessagePersistenceStatistics;



@interface MFMessagePersistenceStatistics_iOS : EDMessagePersistenceStatistics

@property (nonatomic) NSUInteger mailboxesNeedingReconcilication; // ivar: _mailboxesNeedingReconcilication
@property (nonatomic) NSUInteger messagesMarkedAsJournaled; // ivar: _messagesMarkedAsJournaled
@property (nonatomic) BOOL protectedDataAvailable; // ivar: _protectedDataAvailable
@property (nonatomic) NSUInteger protectedMessageData; // ivar: _protectedMessageData
@property (nonatomic) NSUInteger protectedMessages; // ivar: _protectedMessages




@end


#endif