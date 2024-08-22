// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMCLIPPROVIDER_H
#define PMCLIPPROVIDER_H

@class AVAsset, PHImageManager, PHAsset;
@protocol VEKClipProtocol, PMClipProviderDelegate, PMRelatedClipsDelegate;

#import <Foundation/Foundation.h>

#import "VEKProduction.h"
#import "VEKSuggestion.h"

@interface PMClipProvider : NSObject

@property (readonly, nonatomic) CGFloat aspectRatio;
@property (retain, nonatomic) AVAsset *avAsset; // ivar: _avAsset
@property (retain, nonatomic) NSObject<VEKClipProtocol> *clip; // ivar: _clip
@property (weak, nonatomic) NSObject<PMClipProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PHImageManager *imageManager;
@property (retain, nonatomic) NSObject<VEKClipProtocol> *introTransition; // ivar: _introTransition
@property (readonly, nonatomic) CGFloat maxDuration;
@property (retain, nonatomic) NSObject<VEKClipProtocol> *outroTransition; // ivar: _outroTransition
@property (readonly, nonatomic) PHAsset *phAsset;
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (nonatomic) CGFloat projectDuration; // ivar: _projectDuration
@property (weak, nonatomic) NSObject<PMRelatedClipsDelegate> *relatedClipsDelegate; // ivar: _relatedClipsDelegate
@property (nonatomic) CGFloat reorderTimeOffset;
@property (nonatomic) NSInteger specialTreatment;
@property (retain, nonatomic) VEKSuggestion *suggestion; // ivar: _suggestion
@property (readonly, nonatomic) ? suggestionTrimTimeRange;
@property (nonatomic) ? trimTimeRange; // ivar: _trimTimeRange
@property (readonly, nonatomic) BOOL trimmable;
@property (nonatomic) NSInteger usage;
@property (nonatomic) NSInteger volume;


+(id)getThumbnailQueue;
-(BOOL)shouldTrimToProposedTimeRange:(struct ? )arg0 ;
-(BOOL)trimToTimeRange:(struct ? )arg0 ;
-(id)createSlomoComposition:(id)arg0 ;
-(id)description;
-(id)initWithClip:(id)arg0 production:(id)arg1 result:(id)arg2 ;
-(id)suggestionsForAsset:(id)arg0 ;
-(void)addSuggestionToProduction;
-(void)createSuggestionIfNeeded;
-(void)replaceSuggestionWithSuggestion:(id)arg0 ;
-(void)requestAVAssetWithResultHandler:(id)arg0 ;
-(void)requestPlayerItemWithResultHandler:(id)arg0 ;
-(void)requestStillImageForSize:(struct CGSize )arg0 atTime:(struct ? )arg1 withResultHandler:(id)arg2 ;


@end


#endif