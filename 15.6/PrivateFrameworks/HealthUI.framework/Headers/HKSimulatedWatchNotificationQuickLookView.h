// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMULATEDWATCHNOTIFICATIONQUICKLOOKVIEW_H
#define HKSIMULATEDWATCHNOTIFICATIONQUICKLOOKVIEW_H

@class UIView, NSString, UIImage, UIImageView, UILabel, UIColor;



@interface HKSimulatedWatchNotificationQuickLookView : UIView

@property (retain, nonatomic) NSString *detailLabelText; // ivar: _detailLabelText
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) UIImageView *quickLookIconView; // ivar: _quickLookIconView
@property (retain, nonatomic) UIView *quickLookSubtitleContainer; // ivar: _quickLookSubtitleContainer
@property (retain, nonatomic) UILabel *quickLookSubtitleLabel; // ivar: _quickLookSubtitleLabel
@property (retain, nonatomic) UIView *quickLookTitleContainer; // ivar: _quickLookTitleContainer
@property (retain, nonatomic) UILabel *quickLookTitleLabel; // ivar: _quickLookTitleLabel
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) NSString *titleLabelText; // ivar: _titleLabelText


-(id)initWithIconImage:(id)arg0 titleText:(id)arg1 detailText:(id)arg2 tintColor:(id)arg3 ;
-(void)_layoutQuickLook;
-(void)_setUpSubviews;


@end


#endif