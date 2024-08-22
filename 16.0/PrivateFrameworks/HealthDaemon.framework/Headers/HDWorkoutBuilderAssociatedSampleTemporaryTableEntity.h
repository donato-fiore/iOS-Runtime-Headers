// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTBUILDERASSOCIATEDSAMPLETEMPORARYTABLEENTITY_H
#define HDWORKOUTBUILDERASSOCIATEDSAMPLETEMPORARYTABLEENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderAssociatedSampleTemporaryTableEntity : HDHealthEntity



+(BOOL)isTemporary;
+(BOOL)withLocalTableName:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(id)disambiguatedDatabaseTable;


@end


#endif