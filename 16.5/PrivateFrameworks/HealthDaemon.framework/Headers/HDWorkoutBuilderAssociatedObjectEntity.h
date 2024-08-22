// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTBUILDERASSOCIATEDOBJECTENTITY_H
#define HDWORKOUTBUILDERASSOCIATEDOBJECTENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity



+(BOOL)enumerateAssociatedUUIDsForBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)removeAssociationFromBuilder:(id)arg0 toUUID:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)associateObject:(id)arg0 timestamp:(CGFloat)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif