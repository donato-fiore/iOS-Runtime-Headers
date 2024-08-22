// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITSTORECOMPARISONCACHESTORECACHE_H
#define PFCLOUDKITSTORECOMPARISONCACHESTORECACHE_H

@class NSMutableSet, NSMutableDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PFCloudKitStoreComparisonCacheStoreCache : NSObject {
    NSMutableSet *_identifiers;
    NSMutableDictionary *_identifierToObjectID;
    NSMutableDictionary *_mtmKeyToMirroredRelationship;
    NSMutableSet *_mtmKeys;
    NSMutableDictionary *_zoneIDToMTMKeys;
    NSMutableDictionary *_recordIDToRelationshipNameToRelatedRecordIDs;
    NSMutableDictionary *_recordIDToMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableSet *_recordIDs;
    NSMutableDictionary *_recordIDToObjectID;
    NSMutableDictionary *_objectIDToRecordID;
    NSMutableSet *_recordZones;
    NSMutableSet *_sharedRecordZones;
    NSMutableDictionary *_recordZoneIDToRecordIDs;
    BOOL _checkCloudKitMetadata;
    NSString *_identityRecordName;
    NSNumber *_databaseScopeNumber;
}




-(id)init;
-(void)dealloc;


@end


#endif