// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCPHOTOLISTCELL_H
#define NTKCPHOTOLISTCELL_H

@class UICollectionViewCell, UIView, UIImageView, UIImage;



@interface NTKCPhotoListCell : UICollectionViewCell {
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadge;
    UIView *_highlightOverlayView;
    UIView *_content;
    UIImageView *_contentImageView;
}


@property (nonatomic) CGRect crop; // ivar: _crop
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) UIImage *photo;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif