// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUISONGDETAILSVIEW_H
#define CPUISONGDETAILSVIEW_H

@class UIView, NSString, UILabel, UIStackView;


#import "CPUILabelButton.h"
#import "CPUITitleView.h"

@interface CPUISongDetailsView : UIView

@property (readonly, nonatomic) CPUILabelButton *albumArtistLabelButton; // ivar: _albumArtistLabelButton
@property (retain, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (retain, nonatomic) UILabel *artistLabel; // ivar: _artistLabel
@property (retain, nonatomic) NSString *artistName; // ivar: _artistName
@property (nonatomic) NSUInteger fontStyle; // ivar: _fontStyle
@property (nonatomic) CGSize maximumTitleViewSize; // ivar: _maximumTitleViewSize
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) CPUITitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) NSString *trackTitle; // ivar: _trackTitle


+(CGFloat)maximumHeightForTrackInfoFontStyle:(NSUInteger)arg0 ;
+(CGFloat)minimumHeightForTrackInfoFontStyle:(NSUInteger)arg0 ;
-(id)_attributedTitle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateFont;
-(void)_updateNumberOfLines;


@end


#endif