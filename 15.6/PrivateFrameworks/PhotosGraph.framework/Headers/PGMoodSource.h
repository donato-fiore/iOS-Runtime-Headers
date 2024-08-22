// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMOODSOURCE_H
#define PGMOODSOURCE_H

@class PHAssetCollection, NSDictionary, PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGEnrichedMemory.h"
#import "PGMoodVector.h"
#import "PGMoodGeneratorOptions.h"

@interface PGMoodSource : NSObject

@property (readonly) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly) PGEnrichedMemory *enrichedMemory; // ivar: _enrichedMemory
@property (readonly) NSDictionary *moodSourceDictionary; // ivar: _moodSourceDictionary
@property (retain) PGMoodVector *negativeVector; // ivar: _negativeVector
@property (readonly) PGMoodGeneratorOptions *options; // ivar: _options
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain) PGMoodVector *positiveVector; // ivar: _positiveVector


+(id)_plistName;
-(CGFloat)weight;
-(NSUInteger)_sourceInputCount;
-(id)_moodVectorForMoodIdentifier:(id)arg0 ;
-(id)_moodVectorsWithGraph:(id)arg0 ;
-(id)_plistMoodIdentifiersWithGraph:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
-(id)initWithEnrichedMemory:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
-(id)negativeVectorWithGraph:(id)arg0 ;
-(id)positiveVectorWithGraph:(id)arg0 ;
-(void)_combineMoodVectorsWithGraph:(id)arg0 ;


@end


#endif