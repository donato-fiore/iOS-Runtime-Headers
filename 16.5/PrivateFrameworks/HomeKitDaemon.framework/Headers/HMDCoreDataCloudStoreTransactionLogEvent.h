// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDSTORETRANSACTIONLOGEVENT_H
#define HMDCOREDATACLOUDSTORETRANSACTIONLOGEVENT_H

@class HMMLogEvent, NSCountedSet, NSString;



@interface HMDCoreDataCloudStoreTransactionLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSCountedSet *reasons; // ivar: _reasons
@property (readonly, nonatomic) NSString *transactionAuthor; // ivar: _transactionAuthor


+(id)eventForUpdates:(id)arg0 inserts:(id)arg1 deletes:(id)arg2 transactionAuthor:(id)arg3 ;
+(void)countMKFCKEntitiesInChangeSet:(id)arg0 entitiesCount:(id)arg1 ;
+(void)trimChangeSetForUnchangedValues:(id)arg0 ;
-(id)initWithChangeSet:(id)arg0 transactionAuthor:(id)arg1 ;


@end


#endif