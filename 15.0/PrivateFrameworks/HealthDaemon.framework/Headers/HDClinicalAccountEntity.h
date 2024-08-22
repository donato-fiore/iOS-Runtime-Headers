// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLINICALACCOUNTENTITY_H
#define HDCLINICALACCOUNTENTITY_H



#import "HDHealthEntity.h"

@interface HDClinicalAccountEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)checkConstraints;
+(id)databaseTable;
+(id)foreignKeys;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif