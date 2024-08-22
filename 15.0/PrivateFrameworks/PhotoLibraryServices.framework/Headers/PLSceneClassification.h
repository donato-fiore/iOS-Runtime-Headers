// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSCENECLASSIFICATION_H
#define PLSCENECLASSIFICATION_H



#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLSceneClassification : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) CGFloat confidence;
@property (nonatomic) NSInteger packedBoundingBoxRect;
@property (nonatomic) unsigned int sceneIdentifier;


+(id)PLJunkSceneClassificationIDForLabel:(id)arg0 ;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 asset:(id)arg1 sceneIdentifier:(int)arg2 confidence:(CGFloat)arg3 packedBoundingBoxRect:(NSInteger)arg4 ;
+(void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg0 library:(id)arg1 completion:(id)arg2 ;
-(id)debugLogDescription;


@end


#endif