// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSITECARDCELL_H
#define SFSITECARDCELL_H

@class UICollectionViewCell, UIImageView, UILabel, UILayoutGuide, UIVisualEffectView, UIImage, NSString;
@protocol SFSiteCardModel;


#import "SFSiteCardSourceView.h"
#import "_SFSiteIconView.h"

@interface SFSiteCardCell : UICollectionViewCell <SFSiteCardModel>

 {
    UIImageView *_badgeView;
    SFSiteCardSourceView *_captionLabel;
    _SFSiteIconView *_imageView;
    UILabel *_subtitleLabel;
    UILayoutGuide *_textLayoutGuide;
    UILabel *_titleLabel;
    UIVisualEffectView *_backgroundEffectView;
}


@property (retain, nonatomic) UIImage *badge;
@property (copy, nonatomic) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)reuseIdentifier;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVibrancy;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif