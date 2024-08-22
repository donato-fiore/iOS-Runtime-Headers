// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMETADATAKEYENTITY_H
#define HDMETADATAKEYENTITY_H



#import "HDHealthEntity.h"

@interface HDMetadataKeyEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)_entityForKey:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)_insertEntityWithKey:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)_keyForPersistentID:(id)arg0 database:(id)arg1 ;
+(id)databaseTable;
+(id)entityForKey:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)insertEntityWithKey:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif