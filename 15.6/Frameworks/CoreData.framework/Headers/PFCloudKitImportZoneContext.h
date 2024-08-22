// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITIMPORTZONECONTEXT_H
#define PFCLOUDKITIMPORTZONECONTEXT_H

@class NSArray, NSDictionary, NSSet, NSMutableArray, NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"

@interface PFCloudKitImportZoneContext : NSObject {
    NSArray *_updatedRecords;
    NSDictionary *_deletedRecordTypeToRecordID;
    NSSet *_deletedObjectIDs;
    NSArray *_modifiedRecords;
    NSMutableArray *_updatedRelationships;
    NSArray *_deletedRelationships;
    NSArray *_deletedMirroredRelationshipRecordIDs;
    NSMutableDictionary *_recordTypeToRecordIDToObjectID;
    NSMutableDictionary *_recordTypeToUnresolvedRecordIDs;
    NSMutableArray *_metadatasToLink;
    NSArray *_importOperations;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSURL *_fileBackedFuturesDirectory;
}




-(id)initWithUpdatedRecords:(id)arg0 deletedRecordTypeToRecordIDs:(id)arg1 options:(id)arg2 fileBackedFuturesDirectory:(id)arg3 ;
-(void)dealloc;


@end


#endif