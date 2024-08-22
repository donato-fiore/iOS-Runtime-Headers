// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOWNLOADENTITYTABLEVIEWCELL_H
#define VUIDOWNLOADENTITYTABLEVIEWCELL_H

@class UITableViewCell, NSString, VUIImageView;
@protocol VUIRentalExpirationLabelDelegate, VUIDownloadEntityDelegate, VUIDownloadEntityTableViewCellDelegate;


#import "VUISeparatorView.h"
#import "VUILabel.h"
#import "VUIDownloadButton.h"
#import "VUIDownloadEntity.h"
#import "VUILibraryEpisodeFrameView.h"
#import "VUIVideosImageView.h"

@interface VUIDownloadEntityTableViewCell : UITableViewCell <VUIRentalExpirationLabelDelegate, VUIDownloadEntityDelegate>



@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIDownloadEntityTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel; // ivar: _dotSeparatorLabel
@property (retain, nonatomic) VUIDownloadButton *downloadButton; // ivar: _downloadButton
@property (retain, nonatomic) VUIDownloadEntity *downloadEntity; // ivar: _downloadEntity
@property (retain, nonatomic) VUILibraryEpisodeFrameView *episodeImageView; // ivar: _episodeImageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILabel *metaDataHeaderFirstLabel; // ivar: _metaDataHeaderFirstLabel
@property (retain, nonatomic) VUILabel *metaDataHeaderSecondLabel; // ivar: _metaDataHeaderSecondLabel
@property (retain, nonatomic) VUIImageView *posterImageView; // ivar: _posterImageView
@property (nonatomic) NSUInteger previousDownloadState; // ivar: _previousDownloadState
@property (retain, nonatomic) VUIVideosImageView *rightImageView; // ivar: _rightImageView
@property (readonly) Class superclass;
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView


+(id)_entityPlaceholderImageForDownloadEntity:(id)arg0 ;
+(id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg0 ;
+(void)configureVUIDownloadEntityTableViewCell:(id)arg0 withDownloadEntity:(id)arg1 forMetrics:(BOOL)arg2 ;
-(CGFloat)_imageHeightForCurrentSizeClass;
-(CGFloat)_verticalPaddingForCurrentSizeClass;
-(id)_episodePlaceholderImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutForCategoryAccessibility:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutForCompact:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addDownloadButtonIfRequired:(id)arg0 ;
-(void)_addMetaDataLabelsIfRequired:(id)arg0 ;
-(void)_configureViewElementsForAX;
-(void)_removeDownloadButtonIfRequired;
-(void)downloadEntity:(id)arg0 numberOfItemsDidChange:(NSUInteger)arg1 ;
-(void)downloadEntity:(id)arg0 numberOfItemsDownloadingDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif