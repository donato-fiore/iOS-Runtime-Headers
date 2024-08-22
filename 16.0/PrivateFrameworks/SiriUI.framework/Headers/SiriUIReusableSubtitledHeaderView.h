// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIREUSABLESUBTITLEDHEADERVIEW_H
#define SIRIUIREUSABLESUBTITLEDHEADERVIEW_H

@class NSAttributedString, UILabel, NSString;


#import "SiriUIReusableHeaderView.h"

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView

@property (copy, nonatomic) NSAttributedString *attributedSubtitleText; // ivar: _attributedSubtitleText
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *subtitleText;


+(CGFloat)defaultHeight;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureSubTitleLabelForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif