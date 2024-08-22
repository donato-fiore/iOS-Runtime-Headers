// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPROTECTEDKEYVALUEENTITY_H
#define HDPROTECTEDKEYVALUEENTITY_H



#import "HDKeyValueEntity.h"

@interface HDProtectedKeyValueEntity : HDKeyValueEntity



+(BOOL)setUserCharacteristic:(id)arg0 forType:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)_deviceLocalCategory;
+(NSInteger)protectionClass;
+(char *)_insertStatementKey;
+(id)databaseTable;
+(id)keyForUserCharacteristicType:(id)arg0 ;
+(id)modificationDateForCharacteristicWithType:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)userCharacteristicForType:(id)arg0 profile:(id)arg1 entity:(*id)arg2 error:(*id)arg3 ;


@end


#endif