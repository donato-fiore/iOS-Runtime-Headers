// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITMETADATACACHE_H
#define PFCLOUDKITMETADATACACHE_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PFCloudKitMetadataCache : NSObject {
    NSMutableDictionary *_recordZoneIDToZoneMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableDictionary *_recordIDToMirroredRelationshipOrRecordMetadata;
    NSMutableDictionary *_zoneIDToMtmKeyToMirroredRelationship;
    NSMutableDictionary *_objectIDToRelationshipNameToExistingMTMKeys;
    NSMutableDictionary *_objectIDToChangedPropertyKeys;
    NSMutableSet *_invalidatedMTMKeys;
}




-(id)init;
-(void)dealloc;


@end


#endif