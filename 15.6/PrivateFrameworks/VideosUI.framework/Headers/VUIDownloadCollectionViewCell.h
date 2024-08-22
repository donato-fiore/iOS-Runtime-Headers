// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADCOLLECTIONVIEWCELL_H
#define VUIDOWNLOADCOLLECTIONVIEWCELL_H

@class NSString, UIImageView;
@protocol VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate, VUIDownloadCollectionViewCellDelegate;


#import "VUILibraryLockupViewCell.h"
#import "VUILabel.h"
#import "VUIDownloadButton.h"
#import "VUIDownloadEntity.h"

@interface VUIDownloadCollectionViewCell : VUILibraryLockupViewCell <VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIDownloadCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel; // ivar: _dotSeparatorLabel
@property (retain, nonatomic) VUIDownloadButton *downloadButton; // ivar: _downloadButton
@property (retain, nonatomic) VUIDownloadEntity *downloadEntity; // ivar: _downloadEntity
@property (retain, nonatomic) UIImageView *editImageView; // ivar: _editImageView
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILabel *metaDataHeaderFirstLabel; // ivar: _metaDataHeaderFirstLabel
@property (retain, nonatomic) VUILabel *metaDataHeaderSecondLabel; // ivar: _metaDataHeaderSecondLabel
@property (nonatomic) NSUInteger previousDownloadState; // ivar: _previousDownloadState
@property (readonly) Class superclass;


+(id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg0 ;
+(void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg0 withDownloadEntity:(id)arg1 ;
+(void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg0 withDownloadEntity:(id)arg1 ;
+(void)configureVUIDownloadEntityCollectionViewCell:(id)arg0 withDownloadEntity:(id)arg1 width:(CGFloat)arg2 forMetrics:(BOOL)arg3 ;
-(BOOL)_hasSecondaryLabel;
-(struct CGSize )_layoutForAccessibility:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutForCompact:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addDownloadButtonIfRequired:(id)arg0 ;
-(void)_addMetaDataLabelsIfRequired:(id)arg0 ;
-(void)_configureViewElementsForAX;
-(void)_updateViewForEditState;
-(void)downloadEntity:(id)arg0 numberOfItemsDidChange:(NSUInteger)arg1 ;
-(void)downloadEntity:(id)arg0 numberOfItemsDownloadingDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif