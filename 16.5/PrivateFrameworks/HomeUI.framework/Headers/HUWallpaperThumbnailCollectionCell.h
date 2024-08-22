// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUWALLPAPERTHUMBNAILCOLLECTIONCELL_H
#define HUWALLPAPERTHUMBNAILCOLLECTIONCELL_H

@class UICollectionViewListCell, NSString, UIDropInteraction, UIImage, NSLayoutConstraint, UIImageView;
@protocol UIDropInteractionDelegate, HUWallpaperThumbnailCellDelegate;



@interface HUWallpaperThumbnailCollectionCell : UICollectionViewListCell <UIDropInteractionDelegate>



@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUWallpaperThumbnailCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // ivar: _imageHeightConstraint
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIImageView *imageThumbnailView; // ivar: _imageThumbnailView
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // ivar: _imageWidthConstraint
@property (readonly) Class superclass;


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif