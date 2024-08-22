// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYPREVIEWWITHDESCRIPTIONCELL_H
#define PBFPOSTERGALLERYPREVIEWWITHDESCRIPTIONCELL_H

@class UICollectionViewCell, UILabel, NSString;
@protocol PBFPosterGalleryCollectionViewCell, PBFPosterPreview;


#import "PBFPosterGalleryViewSpec.h"
#import "PBFPosterGalleryPreviewView.h"

@interface PBFPosterGalleryPreviewWithDescriptionCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell>

 {
    UILabel *_posterDescriptionLabel;
    ? _metrics;
    PBFPosterGalleryViewSpec *_spec;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *posterDescription; // ivar: _posterDescription
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview
@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView; // ivar: _posterPreviewView
@property (readonly) Class superclass;


-(id)spec;
-(struct ? )metrics;
-(struct CGSize )intrinsicContentSize;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif