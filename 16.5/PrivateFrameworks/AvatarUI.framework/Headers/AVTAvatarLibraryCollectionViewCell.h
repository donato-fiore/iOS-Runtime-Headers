// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARLIBRARYCOLLECTIONVIEWCELL_H
#define AVTAVATARLIBRARYCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;



@interface AVTAvatarLibraryCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateAvatarImage:(id)arg0 ;


@end


#endif