// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDDATAENTITYENCODER_H
#define _HDDATAENTITYENCODER_H



#import "HDEntityEncoder.h"
#import "HDMetadataValueStatement.h"
#import "HDDataProvenanceCache.h"

@interface _HDDataEntityEncoder : HDEntityEncoder {
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    id *_metadataKeyFilter;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
}




-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)initWithHealthEntityClass:(Class)arg0 profile:(id)arg1 transaction:(id)arg2 purpose:(NSInteger)arg3 encodingOptions:(id)arg4 authorizationFilter:(id)arg5 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;
-(void)finish;


@end


#endif