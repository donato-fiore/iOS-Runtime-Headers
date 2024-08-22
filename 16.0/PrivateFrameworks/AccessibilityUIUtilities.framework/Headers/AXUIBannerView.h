// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIBANNERVIEW_H
#define AXUIBANNERVIEW_H

@class NSString, UILabel, NSArray;


#import "AXUIPlatterContainerView.h"

@interface AXUIBannerView : AXUIPlatterContainerView

@property (readonly, nonatomic) CGFloat defaultPlatterToTextVerticalSpacing;
@property (readonly, nonatomic) CGFloat defaultTitleToSubtitleVerticalSpacing;
@property (readonly, nonatomic) CGFloat platterToTextHorizontalSpacing;
@property (retain, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UILabel *secondaryTextLabel; // ivar: _secondaryTextLabel
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSArray *withSecondaryTextConstraints; // ivar: _withSecondaryTextConstraints


-(CGFloat)platterWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSecondaryTextVisibility;


@end


#endif