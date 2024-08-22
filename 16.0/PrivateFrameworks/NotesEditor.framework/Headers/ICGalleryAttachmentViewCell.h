// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICGALLERYATTACHMENTVIEWCELL_H
#define ICGALLERYATTACHMENTVIEWCELL_H

@class UICollectionViewCell, ICAttachment, CALayer, UIImageView;
@protocol ICGalleryAttachmentViewCellDelegate;



@interface ICGalleryAttachmentViewCell : UICollectionViewCell

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (weak, nonatomic) NSObject<ICGalleryAttachmentViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CALayer *fadeImageLayer; // ivar: _fadeImageLayer
@property (retain, nonatomic) CALayer *fadeMaskLayer; // ivar: _fadeMaskLayer
@property (retain, nonatomic) CALayer *fadeWhiteLayer; // ivar: _fadeWhiteLayer
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) BOOL isPortrait;
@property (nonatomic) BOOL shouldFade; // ivar: _shouldFade


-(BOOL)accessibilityIgnoresInvertColors;
-(void)dealloc;
-(void)prepareForReuse;
-(void)updateFadeMask:(BOOL)arg0 ;
-(void)updateImage;


@end


#endif