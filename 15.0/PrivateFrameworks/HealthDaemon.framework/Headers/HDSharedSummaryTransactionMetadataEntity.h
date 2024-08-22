// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHAREDSUMMARYTRANSACTIONMETADATAENTITY_H
#define HDSHAREDSUMMARYTRANSACTIONMETADATAENTITY_H



#import "HDHealthEntity.h"

@interface HDSharedSummaryTransactionMetadataEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithTransactionID:(NSInteger)arg0 metadata:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 ;
+(id)metadataForTransactionID:(NSInteger)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif