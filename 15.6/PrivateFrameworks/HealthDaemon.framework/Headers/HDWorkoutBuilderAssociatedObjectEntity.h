// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTBUILDERASSOCIATEDOBJECTENTITY_H
#define HDWORKOUTBUILDERASSOCIATEDOBJECTENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity



+(BOOL)enumerateAssociatedUUIDsForBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)removeAssociationFromBuilder:(id)arg0 toUUID:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)associateObject:(id)arg0 withBuilder:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif