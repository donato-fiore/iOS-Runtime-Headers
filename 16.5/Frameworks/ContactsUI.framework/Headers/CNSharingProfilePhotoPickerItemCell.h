// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARINGPROFILEPHOTOPICKERITEMCELL_H
#define CNSHARINGPROFILEPHOTOPICKERITEMCELL_H

@class UICollectionViewCell, UIImageView, CAShapeLayer;


#import "CNSharingProfilePhotoPickerItem.h"

@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isSmallScreen; // ivar: _isSmallScreen
@property (nonatomic) CGSize originalSize; // ivar: _originalSize
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *pickerItem; // ivar: _pickerItem
@property (retain, nonatomic) CAShapeLayer *selectionStrokeLayer; // ivar: _selectionStrokeLayer


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectionBezierPath;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithImage:(id)arg0 ;


@end


#endif