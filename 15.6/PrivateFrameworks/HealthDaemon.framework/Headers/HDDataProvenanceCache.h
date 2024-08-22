// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATAPROVENANCECACHE_H
#define HDDATAPROVENANCECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDataProvenanceManager.h"
#import "HDDatabaseTransaction.h"
#import "HDEntityEncoder.h"

@interface HDDataProvenanceCache : NSObject {
    HDProfile *_profile;
    HDDataProvenanceManager *_provenanceManager;
    HDDatabaseTransaction *_transaction;
    HDEntityEncoder *_sourceEncoder;
    NSMutableDictionary *_provenanceByID;
    NSMutableDictionary *_codableSourcesByID;
    NSMutableDictionary *_deviceUUIDBytesByID;
    NSMutableDictionary *_sourceByPersistentIDCache;
    NSMutableDictionary *_sourceRevisionByDataProvenanceIDCache;
    NSMutableDictionary *_sourceRevisionsDictionaryBySourceCache;
    NSMutableDictionary *_deviceByPersistentIDCache;
    NSMutableDictionary *_contributorByReferenceCache;
    NSMutableDictionary *_codableObjectCollectionsByProvenance;
}




-(id)allCodableObjectCollections;
-(id)codableObjectCollectionForProvenance:(id)arg0 ;
-(id)codableProvenanceWithProvenance:(id)arg0 ;
-(id)codableSourceWithProvenance:(id)arg0 ;
-(id)contributorForReference:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)deviceForPersistentID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)deviceUUIDBytesWithProvenance:(id)arg0 ;
-(id)initWithProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 ;
-(id)provenanceWithID:(id)arg0 ;
-(id)sourceRevisionForProvenanceID:(id)arg0 dataProvenance:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(void)clearCodableObjectCollections;


@end


#endif