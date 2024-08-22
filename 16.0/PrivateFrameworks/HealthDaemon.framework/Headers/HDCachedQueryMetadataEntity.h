// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCACHEDQUERYMETADATAENTITY_H
#define HDCACHEDQUERYMETADATAENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDHealthEntity.h"

@interface HDCachedQueryMetadataEntity : HDHealthEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)updateCachedQueryMetadata:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)cachedQueryMetadataForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)creationDateForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)generationNumberForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)insertCachedQueryMetadata:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)lastUpdatedDateForQueryIdentifier:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)pruneWithProfile:(id)arg0 nowDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif