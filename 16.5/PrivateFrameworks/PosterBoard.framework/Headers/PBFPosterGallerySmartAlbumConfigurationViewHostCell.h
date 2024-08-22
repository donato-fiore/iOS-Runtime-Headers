// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYSMARTALBUMCONFIGURATIONVIEWHOSTCELL_H
#define PBFPOSTERGALLERYSMARTALBUMCONFIGURATIONVIEWHOSTCELL_H

@class UICollectionViewCell, UIView;



@interface PBFPosterGallerySmartAlbumConfigurationViewHostCell : UICollectionViewCell

@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView


-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)updateContent:(id)arg0 ;


@end


#endif