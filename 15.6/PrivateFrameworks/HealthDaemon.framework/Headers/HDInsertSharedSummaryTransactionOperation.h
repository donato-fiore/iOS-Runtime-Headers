// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDINSERTSHAREDSUMMARYTRANSACTIONOPERATION_H
#define HDINSERTSHAREDSUMMARYTRANSACTIONOPERATION_H



#import "HDJournalableOperation.h"
#import "HDCloudSyncZoneIdentifier.h"

@interface HDInsertSharedSummaryTransactionOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneIdentifier:(id)arg0 ;
-(id)transactionContext;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif