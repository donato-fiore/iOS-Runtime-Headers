// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMETADATAVALUEENTITY_H
#define HDMETADATAVALUEENTITY_H



#import "HDHealthEntity.h"

@interface HDMetadataValueEntity : HDHealthEntity



+(BOOL)_insertMetadataValueWithKeyID:(NSInteger)arg0 objectID:(NSInteger)arg1 value:(id)arg2 database:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)deleteStatementForObjectMetadataWithTransaction:(id)arg0 ;
+(id)indices;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif