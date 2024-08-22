// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMCLIPCOLLECTIONPROVIDER_H
#define PMCLIPCOLLECTIONPROVIDER_H

@class NSMutableArray, NSString, NSMutableSet;
@protocol PMEditProviderProtocol, PMRelatedClipsDelegate, PMClipCollectionProviderDelegate, PMEditProviderDelegate, VEKProjectProtocol;

#import <Foundation/Foundation.h>

#import "VEKProduction.h"
#import "VEKResult.h"

@interface PMClipCollectionProvider : NSObject <PMEditProviderProtocol, PMRelatedClipsDelegate>



@property (readonly, nonatomic) NSMutableArray *assetClipProviders;
@property (retain, nonatomic) NSMutableArray *assetClipProviders; // ivar: _assetClipProviders
@property (weak, nonatomic) NSObject<PMClipCollectionProviderDelegate> *clipCollectionDelegate; // ivar: _clipCollectionDelegate
@property (nonatomic) CGFloat currentDuration; // ivar: _currentDuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VEKProduction *production;
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) NSObject<VEKProjectProtocol> *project; // ivar: _project
@property (retain, nonatomic) NSMutableSet *projectAssets; // ivar: _projectAssets
@property (retain, nonatomic) VEKResult *result; // ivar: _result
@property (nonatomic) BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;


-(BOOL)assetHasUserModifiedAudioLevel:(id)arg0 ;
-(BOOL)assetIsPartOfMultiUp:(id)arg0 ;
-(BOOL)clipIsPartOfMultiUp:(id)arg0 ;
-(BOOL)clipIsPartOfSplit:(id)arg0 ;
-(NSUInteger)clipProviderIndexForSequenceTime:(struct ? )arg0 ;
-(NSUInteger)numberOfItems;
-(id)_otherSplitClipsForClip:(id)arg0 ;
-(id)allAssetsIncludingAllMomentsAssets:(BOOL)arg0 ;
-(id)assetSetFromProject:(id)arg0 ;
-(id)clipProviderAtIndex:(NSUInteger)arg0 ;
-(id)clipProvidersForAsset:(id)arg0 ;
-(id)clipSuggestionsForAsset:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentProductionAssetIDs;
-(id)currentProductionAssets;
-(id)indexesForClipProvidersOfAssetID:(id)arg0 ;
-(id)initWithProduction:(id)arg0 ;
-(id)initWithResult:(id)arg0 production:(id)arg1 ;
-(id)suggestedAssets;
-(id)suggestionsForAsset:(id)arg0 ;
-(struct CGSize )naturalSize;
-(void)removeClipAtIndex:(NSUInteger)arg0 ;
-(void)removeSuggestionsForAsset:(id)arg0 ;
-(void)triggerEdit;
// -(void)updateClipProvidersForAssets:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)updateSuggestionsForAddedAsset:(id)arg0 ;
-(void)updateWithResult:(id)arg0 ;
-(void)updateWithResult:(id)arg0 error:(id)arg1 ;
-(void)validateRangeSuggestionMatching;


@end


#endif