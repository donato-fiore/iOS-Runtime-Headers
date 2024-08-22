// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYPHOTOSGRAPHPROPERTIES_H
#define PGMEMORYPHOTOSGRAPHPROPERTIES_H

@class PHPhotoLibrary;
@protocol PGEnrichedMemoryProtocol, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGNeighborScoreComputer.h"

@interface PGMemoryPhotosGraphProperties : NSObject {
    id<PGEnrichedMemoryProtocol> *_enrichedMemory;
    PHPhotoLibrary *_photoLibrary;
    PGNeighborScoreComputer *_neighborScoreComputer;
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}




+(id)_storyRecipeSongCatalogForAppleMusicSubscriber:(BOOL)arg0 ;
-(BOOL)isTriggered;
-(NSInteger)phTitleCategory;
-(NSInteger)sourceType;
-(NSUInteger)numberOfMoments;
-(id)_recipeFromEnrichedMemory:(id)arg0 subscriberCatalog:(id)arg1 applyColorGrading:(BOOL)arg2 loggingConnection:(id)arg3 ;
-(id)dictionary;
-(id)encodedBlockableFeatures;
-(id)encodedFeatures;
-(id)featureVectorV1;
-(id)featureVectorV2;
-(id)infoDictionary;
-(id)infoForBackingMoments;
-(id)infoForGraphCollection;
-(id)initWithEnrichedMemory:(id)arg0 neighborScoreComputer:(id)arg1 isAppleMusicSubscriber:(BOOL)arg2 photoLibrary:(id)arg3 loggingConnection:(id)arg4 ;
-(id)musicGenreDistribution;
-(id)personLocalIdentifiers;
-(id)triggerTypesArray;


@end


#endif