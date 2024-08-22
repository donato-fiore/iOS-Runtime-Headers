// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPHOTOPICKERCELL_H
#define MFPHOTOPICKERCELL_H

@class UICollectionViewCell, NSString, UIImageView, UIImage;
@protocol MFReusableIdentifiable;


#import "MFRoundProgressView.h"

@interface MFPhotoPickerCell : UICollectionViewCell <MFReusableIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) UIImageView *mediaTypeBadgeView; // ivar: _mediaTypeBadgeView
@property (retain, nonatomic) MFRoundProgressView *progressView; // ivar: _progressView
@property (copy, nonatomic) NSString *representedAssetIdentifier; // ivar: _representedAssetIdentifier
@property (retain, nonatomic) UIImageView *selectedBadgeView; // ivar: _selectedBadgeView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)resetProgress;
-(void)setProgress:(CGFloat)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif