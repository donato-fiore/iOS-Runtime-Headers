// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYGENERATORUTILS_H
#define PGMEMORYGENERATORUTILS_H


#import <Foundation/Foundation.h>


@interface PGMemoryGeneratorUtils : NSObject



+(BOOL)isImportedAsset:(id)arg0 ;
+(id)_outdoorROITypes;
+(id)babyAndChildPersonNodesAtHomeOrFrequentLocationInGraph:(id)arg0 ;
+(id)filterImportedAssets:(id)arg0 byOverlapWithRelevantAssets:(id)arg1 withGraph:(id)arg2 ;
+(id)filterImportedAssetsWithoutLocationAndWithoutSceneOrPersonOverlapFromAllAssets:(id)arg0 withGraph:(id)arg1 ;
+(id)momentNodesAtHomeOrWorkOrFrequentLocationInGraph:(id)arg0 ;
+(id)outdoorROIMomentNodesNotAtHomeOrFrequentLocationInGraph:(id)arg0 useMomentFeatureEdges:(BOOL)arg1 ;
+(id)outdoorROINodesInGraph:(id)arg0 ;
+(id)personAndPetLocalIdentifiersInAssets:(id)arg0 ;


@end


#endif