// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSERVICEENTITY_H
#define HDSERVICEENTITY_H



#import "HDHealthEntity.h"

@interface HDServiceEntity : HDHealthEntity



+(BOOL)deleteService:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(BOOL)healthUpdatesEnabledForDevice:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
+(BOOL)setHealthUpdatesEnabled:(BOOL)arg0 forDevice:(id)arg1 inDatabase:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)allServicesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertOrUpdateService:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)tableAliases;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif