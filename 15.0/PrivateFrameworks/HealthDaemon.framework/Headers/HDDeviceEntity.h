// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEVICEENTITY_H
#define HDDEVICEENTITY_H



#import "HDHealthEntity.h"

@interface HDDeviceEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)deviceEntitiesWithDevice:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)deviceEntitiesWithProperty:(id)arg0 matchingValues:(id)arg1 healthDatabase:(id)arg2 error:(*id)arg3 ;
+(id)deviceEntityWithDevice:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)deviceEntityWithUUID:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)creationDateInHealthDatabase:(id)arg0 error:(*id)arg1 ;
-(id)deviceInHealthDatabase:(id)arg0 error:(*id)arg1 ;
-(id)deviceUUIDInDatabase:(id)arg0 error:(*id)arg1 ;
-(id)deviceUUIDInHealthDatabase:(id)arg0 error:(*id)arg1 ;


@end


#endif