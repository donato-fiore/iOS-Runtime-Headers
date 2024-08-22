// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYRECIPECLIPUTILITIES_H
#define PXSTORYRECIPECLIPUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXStoryRecipeClipUtilities : NSObject



+(BOOL)asset:(id)arg0 isClassifiedAs:(id)arg1 ;
+(BOOL)assetHasHighCurationScore:(id)arg0 ;
+(BOOL)assetHasSignificantFaceArea:(id)arg0 ;
+(BOOL)assetIsPet:(id)arg0 ;
+(BOOL)assetIsPortrait:(id)arg0 ;
+(BOOL)canRotate1UpClipsInRange:(struct _NSRange )arg0 clipCatalog:(id)arg1 maxAdjacent1Ups:(NSInteger)arg2 ;
+(BOOL)canRotateAsset:(id)arg0 ;
+(id)doNotRotateSceneIdentifiers;
+(id)doNotRotateWithSkySceneIdentifiers;
+(id)peopleSceneIdentifiers;
+(id)petSceneIdentifiers;
+(id)skySceneIdentifiers;


@end


#endif