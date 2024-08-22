// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEFERREDREBUILDFACE_H
#define PLDEFERREDREBUILDFACE_H

@class NSString;
@protocol PLFaceRebuildDescription;


#import "PLManagedObject.h"

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>



@property (copy, nonatomic) NSString *assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerX;
@property (readonly, nonatomic) CGFloat centerY;
@property (nonatomic) CGFloat centerY;
@property (readonly, nonatomic) int cloudNameSource;
@property (nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (nonatomic) BOOL clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int faceAlgorithmVersion;
@property (copy, nonatomic) NSString *faceUUID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (nonatomic) BOOL manual;
@property (readonly, nonatomic) int nameSource;
@property (nonatomic) int nameSource;
@property (copy, nonatomic) NSString *personUUID;
@property (nonatomic) BOOL rejected;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (nonatomic) BOOL representative;
@property (readonly, nonatomic) CGFloat size;
@property (nonatomic) CGFloat size;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uuid;


+(id)deferredFacesWithAssetCloudGUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
-(id)additionalDescription;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;


@end


#endif