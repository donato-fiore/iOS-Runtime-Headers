// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGKEYCURATOR_H
#define PGKEYCURATOR_H

@class CLSAssetsBeautifier, CLSSimilarStacker;

#import <Foundation/Foundation.h>

#import "PGCurationCriteriaFactory.h"

@interface PGKeyCurator : NSObject {
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
    PGCurationCriteriaFactory *_curationCriteriaFactory;
}




-(BOOL)cluster:(id)arg0 isBetterThanCluster:(id)arg1 forMemories:(BOOL)arg2 allowGuestAsset:(BOOL)arg3 ;
-(BOOL)cluster:(id)arg0 scoresBetterThanCluster:(id)arg1 ;
-(BOOL)item:(id)arg0 passesCriteria:(id)arg1 score:(*CGFloat)arg2 ;
-(BOOL)scoreLevelOfCluster:(id)arg0 isAboveScoreLevelOfCluster:(id)arg1 ;
-(id)_keyItemInItems:(id)arg0 options:(id)arg1 criteria:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)bestItemIdentifierWithItems:(id)arg0 options:(id)arg1 debugInfo:(*id)arg2 criteria:(id)arg3 curationOptions:(id)arg4 ;
-(id)bestItemInItems:(id)arg0 options:(id)arg1 criteria:(id)arg2 minimumCriteriaScore:(CGFloat)arg3 ;
-(id)clusterWithSubclusters:(id)arg0 keyItem:(id)arg1 ;
-(id)initWithCurationCriteriaFactory:(id)arg0 ;
-(id)keyItemIdentifierWithItems:(id)arg0 options:(id)arg1 debugInfo:(*id)arg2 ;
-(id)keyItemInItems:(id)arg0 options:(id)arg1 criteria:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)keyItemWithFeeder:(id)arg0 options:(id)arg1 criteria:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;


@end


#endif