// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCLUSTERMETADATAQUERY_H
#define SHCLUSTERMETADATAQUERY_H


#import <Foundation/Foundation.h>


@interface SHClusterMetadataQuery : NSObject



+(BOOL)writeMetadata:(id)arg0 toDatabaseAtLocation:(id)arg1 error:(*id)arg2 ;
+(NSInteger)dataStoreTypeFromString:(id)arg0 ;
+(id)dateFormatter;
+(id)metadataFromDatabaseAtLocation:(id)arg0 error:(*id)arg1 ;
+(id)stringFromStoreType:(NSInteger)arg0 ;


@end


#endif