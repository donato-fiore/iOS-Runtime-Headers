// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKVIBRANTLABEL_H
#define MKVIBRANTLABEL_H

@class UILabel, NSAttributedString, UIFont, NSString, UIColor;


#import "MKVibrantView.h"

@interface MKVibrantLabel : MKVibrantView {
    UILabel *_label;
}


@property (nonatomic, setter=_setHyphenationFactor:) float _hyphenationFactor;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) CGFloat idealWidth;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) UIColor *textColor;


-(id)initWithStyle:(NSInteger)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;


@end


#endif