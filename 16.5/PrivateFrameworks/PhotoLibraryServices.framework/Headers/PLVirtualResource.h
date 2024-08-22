// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIRTUALRESOURCE_H
#define PLVIRTUALRESOURCE_H

@class NSString, NSURL, NSDate;
@protocol PLWriteableResource, PLValidatesResourceModel, PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

#import <Foundation/Foundation.h>

#import "PLUniformTypeIdentifier.h"

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel>



@property (readonly, copy, nonatomic) NSObject<PLAssetID> *assetID; // ivar: _assetID
@property (retain, nonatomic) NSString *codecFourCharCodeName; // ivar: _codecFourCharCodeName
@property (readonly, nonatomic) NSUInteger cplType;
@property (readonly, nonatomic) NSInteger dataLength;
@property (retain, nonatomic) NSObject<PLResourceDataStore> *dataStore; // ivar: _dataStore
@property (retain, nonatomic) NSObject<PLResourceDataStoreKey> *dataStoreKey; // ivar: _dataStoreKey
@property (nonatomic) NSInteger dataStoreSubtype; // ivar: _dataStoreSubtype
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedDataLength;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly, nonatomic) short localAvailability;
@property (readonly, nonatomic) short localAvailabilityTarget; // ivar: _localAvailabilityTarget
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (readonly, nonatomic) NSInteger orientedHeight;
@property (readonly, nonatomic) NSInteger orientedWidth;
@property (nonatomic) int qualitySortValue; // ivar: _qualitySortValue
@property (nonatomic) unsigned int recipeID; // ivar: _recipeID
@property (nonatomic) short remoteAvailability; // ivar: _remoteAvailability
@property (readonly, nonatomic) short remoteAvailabilityTarget; // ivar: _remoteAvailabilityTarget
@property (nonatomic) unsigned int resourceType; // ivar: _resourceType
@property (nonatomic) float scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *trashedDate; // ivar: _trashedDate
@property (readonly, nonatomic) short trashedState; // ivar: _trashedState
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (nonatomic) NSInteger unorientedHeight; // ivar: _unorientedHeight
@property (nonatomic) NSInteger unorientedWidth; // ivar: _unorientedWidth
@property (readonly, nonatomic) short utiConformanceHint;
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isDefaultOrientation;
-(BOOL)isDerivative;
-(BOOL)isInCloud;
-(BOOL)isPlayableVideo;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg0 currentWidth:(NSInteger)arg1 currentHeight:(NSInteger)arg2 ;
-(id)initWithAsset:(id)arg0 resourceType:(unsigned int)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 ;
-(id)initWithRecipe:(id)arg0 forAsset:(id)arg1 ;
-(id)photosCTLJSONDict;
-(id)singleLineDescription;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;


@end


#endif