// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCGALLERYCOLLECTIONCELL_H
#define _NTKCGALLERYCOLLECTIONCELL_H

@class UICollectionViewCell, UILabel, UIStackView, UIImage, NSString, UIView, UIFontMetrics;


#import "NTKCFaceContainerView.h"

@interface _NTKCGalleryCollectionCell : UICollectionViewCell {
    UILabel *_nameLabel;
    UIStackView *_contentStack;
}


@property (nonatomic) BOOL active;
@property (retain, nonatomic) UIImage *calloutImage; // ivar: _calloutImage
@property (copy, nonatomic) NSString *calloutName; // ivar: _calloutName
@property (retain, nonatomic) NTKCFaceContainerView *faceContainerView; // ivar: _faceContainerView
@property (retain, nonatomic) UIView *faceView;
@property (retain, nonatomic) UIFontMetrics *fontMetrics; // ivar: _fontMetrics


+(id)agaveReuseIdentifier;
+(id)aloeReuseIdentifier;
+(id)classicReuseIdentifier;
+(id)luxoReuseIdentifier;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_highlight;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif