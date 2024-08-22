// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSSTICKERCOLLECTIONVIEWCELL_H
#define AVTSTICKERRECENTSSTICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSUUID, UIImageView, UILabel, NSString;



@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *prereleaseLabel; // ivar: _prereleaseLabel
@property (nonatomic) BOOL showPrereleaseSticker; // ivar: _showPrereleaseSticker
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)identifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setupPrereleaseLabelIfNeeded;
-(void)updateWithDefaultImage;
-(void)updateWithImage:(id)arg0 ;


@end


#endif