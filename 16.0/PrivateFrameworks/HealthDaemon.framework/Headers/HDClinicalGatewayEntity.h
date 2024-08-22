// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLINICALGATEWAYENTITY_H
#define HDCLINICALGATEWAYENTITY_H



#import "HDHealthEntity.h"

@interface HDClinicalGatewayEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif