// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDIAGNOSTICSCURATIONVIEWCELL_H
#define PXDIAGNOSTICSCURATIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, NSString, NSDictionary, NSNumber, UIImage;


#import "PXStateBadgeView.h"
#import "PXDedupingBadgeView.h"
#import "PXTextSymbolView.h"
#import "PXScoreView.h"
#import "PXSymbolBadgeView.h"
#import "PXIndexView.h"

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell {
    UIImageView *_imageView;
    PXStateBadgeView *_clusterStateBadgeView;
    PXStateBadgeView *_stateBadgeView;
    PXStateBadgeView *_alternateStateBadgeView;
    PXDedupingBadgeView *_dedupingBadgeView;
    PXTextSymbolView *_sdofOrHDRBadgeView;
    PXTextSymbolView *_favoriteBadgeView;
    PXTextSymbolView *_utilityBadgeView;
    PXTextSymbolView *_blurryBadgeView;
    PXScoreView *_aestheticScoreView;
    PXScoreView *_contentScoreView;
    PXScoreView *_criteriaScoreView;
    PXSymbolBadgeView *_symbolBadgeView;
    PXSymbolBadgeView *_dedupedSymbolBadgeView;
    PXIndexView *_indexView;
}


@property (nonatomic) CGFloat aestheticScore; // ivar: _aestheticScore
@property (retain, nonatomic) NSString *alternateState; // ivar: _alternateState
@property (nonatomic, getter=isBlurry) BOOL blurry; // ivar: _isBlurry
@property (retain, nonatomic) NSString *clusterState; // ivar: _clusterState
@property (nonatomic) CGFloat contentScore; // ivar: _contentScore
@property (nonatomic) CGFloat criteriaScore; // ivar: _criteriaScore
@property (retain, nonatomic) NSDictionary *debugInfo; // ivar: _debugInfo
@property (retain, nonatomic) NSNumber *dedupedSymbolIndex; // ivar: _dedupedSymbolIndex
@property (retain, nonatomic) NSString *dedupingType; // ivar: _dedupingType
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _isFavorite
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *representedAssetIdentifier; // ivar: _representedAssetIdentifier
@property (nonatomic, getter=isSDOFOrHDR, setter=setSDOFOrHDR:) BOOL sdofOrHDR; // ivar: _isSDOFOrHDR
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSNumber *symbolIndex; // ivar: _symbolIndex
@property (retain, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage
@property (nonatomic, getter=isUtility) BOOL utility; // ivar: _isUtility


+(CGFloat)cellHeightWithCellWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setClusterParity:(NSUInteger)arg0 ;
-(void)setComparisonMatch:(BOOL)arg0 ;


@end


#endif