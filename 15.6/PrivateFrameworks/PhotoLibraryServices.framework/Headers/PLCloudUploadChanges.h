// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDUPLOADCHANGES_H
#define PLCLOUDUPLOADCHANGES_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLCloudUploadChanges : NSObject

@property (retain, nonatomic) NSMutableSet *adjustedAssetUuids; // ivar: _adjustedAssetUuids
@property (retain, nonatomic) NSMutableArray *albumChanges; // ivar: _albumChanges
@property (retain, nonatomic) NSMutableArray *albumInserts; // ivar: _albumInserts
@property (retain, nonatomic) NSMutableArray *deferredAssets; // ivar: _deferredAssets
@property (retain, nonatomic) NSMutableArray *deletedRecords; // ivar: _deletedRecords
@property (retain, nonatomic) NSMutableSet *faceChangedAssetUuids; // ivar: _faceChangedAssetUuids
@property (retain, nonatomic) NSMutableArray *faceCropChanges; // ivar: _faceCropChanges
@property (retain, nonatomic) NSMutableArray *insertedAssets; // ivar: _insertedAssets
@property (retain, nonatomic) NSMutableArray *insertedResources; // ivar: _insertedResources
@property (retain, nonatomic) NSMutableArray *memoryChanges; // ivar: _memoryChanges
@property (retain, nonatomic) NSMutableArray *personChanges; // ivar: _personChanges
@property (retain, nonatomic) NSMutableSet *propertyChangedAssetUuids; // ivar: _propertyChangedAssetUuids
@property (retain, nonatomic) NSMutableArray *suggestionChanges; // ivar: _suggestionChanges
@property (retain, nonatomic) NSMutableArray *updatedAssets; // ivar: _updatedAssets
@property (retain, nonatomic) NSMutableArray *updatedMasters; // ivar: _updatedMasters
@property (retain, nonatomic) NSMutableSet *updatedRelationship; // ivar: _updatedRelationship
@property (retain, nonatomic) NSMutableArray *updatedResources; // ivar: _updatedResources
@property (retain, nonatomic) NSMutableArray *userFeedbackChanges; // ivar: _userFeedbackChanges


-(BOOL)isEmpty;
-(id)init;
-(id)summaryDescription;


@end


#endif