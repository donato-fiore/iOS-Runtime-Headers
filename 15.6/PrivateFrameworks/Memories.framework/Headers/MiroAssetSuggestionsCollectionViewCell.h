// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROASSETSUGGESTIONSCOLLECTIONVIEWCELL_H
#define MIROASSETSUGGESTIONSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UILabel, NSArray, UIImageView, NSLayoutConstraint;



@interface MiroAssetSuggestionsCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) UIView *debugGradient; // ivar: _debugGradient
@property (weak, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (retain, nonatomic) NSArray *debugLabels; // ivar: _debugLabels
@property (weak, nonatomic) UIView *debugView; // ivar: _debugView
@property BOOL isKeyAssetPicker; // ivar: _isKeyAssetPicker
@property (retain, nonatomic) UIView *selectionIndicator; // ivar: _selectionIndicator
@property (retain, nonatomic) UIView *selectionIndicatorImageView; // ivar: _selectionIndicatorImageView
@property (retain, nonatomic) UILabel *slomoDurationLabel; // ivar: _slomoDurationLabel
@property (retain, nonatomic) UIView *slomoIndicator; // ivar: _slomoIndicator
@property (retain, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) UILabel *timelapseDurationLabel; // ivar: _timelapseDurationLabel
@property (retain, nonatomic) UIView *timelapseIndicator; // ivar: _timelapseIndicator
@property (retain, nonatomic) UILabel *videoDurationLabel; // ivar: _videoDurationLabel
@property (retain, nonatomic) UIView *videoIndicator; // ivar: _videoIndicator
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorBottomConstraint; // ivar: _videoIndicatorBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorLeadingConstraint; // ivar: _videoIndicatorLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTopConstraint; // ivar: _videoIndicatorTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *videoIndicatorTrailingConstraint; // ivar: _videoIndicatorTrailingConstraint


+(id)circularGlyphViewWithName:(id)arg0 backgroundColor:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)awakeFromNib;
-(void)configureWithAsset:(id)arg0 selected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif