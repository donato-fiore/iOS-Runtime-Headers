// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDQUANTITYSAMPLESTATISTICSENTITY_H
#define HDQUANTITYSAMPLESTATISTICSENTITY_H



#import "HDHealthEntity.h"

@interface HDQuantitySampleStatisticsEntity : HDHealthEntity



+(BOOL)setDiscreteQuantitySampleStatistics:(id)arg0 persistentID:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif