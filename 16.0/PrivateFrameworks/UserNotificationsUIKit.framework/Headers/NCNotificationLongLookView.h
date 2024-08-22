// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLONGLOOKVIEW_H
#define NCNOTIFICATIONLONGLOOKVIEW_H

@class PLExpandedPlatterView, UITapGestureRecognizer, UIView, NSDate, NSString, UIControl, NSArray, NSAttributedString, UIImageConfiguration, MTVisualStylingProvider, UIAction, UIImage, UIScrollView, NSTimeZone, UIButton;
@protocol UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView, NCNotificationListDimmable, NCNotificationLongLookViewDelegate;


#import "NCNotificationContentView.h"

@interface NCNotificationLongLookView : PLExpandedPlatterView <UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView, NCNotificationListDimmable>

 {
    NCNotificationContentView *_notificationContentView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
}


@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (nonatomic) BOOL clipsVisibleContentToBounds;
@property (nonatomic) CGFloat contentBottomInset;
@property (nonatomic) NSUInteger customContentLocation; // ivar: _customContentLocation
@property (nonatomic) CGSize customContentSize;
@property (readonly, nonatomic) UIView *customContentView;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationLongLookViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIControl *dismissControl;
@property (nonatomic, getter=isDismissControlEnabled) BOOL dismissControlEnabled;
@property (readonly, nonatomic) UIEdgeInsets dismissControlInsets;
@property (nonatomic) NSInteger dismissControlPosition;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHeaderEnabled) BOOL headerEnabled;
@property (nonatomic) BOOL hidesNotificationContent; // ivar: _hidesNotificationContent
@property (readonly, nonatomic) NSArray *iconButtons;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) UIAction *inlineAction;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) NSUInteger maximumNumberOfPrimaryTextLines;
@property (nonatomic) NSUInteger maximumNumberOfSecondaryTextLines;
@property (copy, nonatomic) NSArray *menuActions;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;


-(BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSInteger)lookStyle;
-(NSUInteger)maximumNumberOfPrimaryLargeTextLines;
-(NSUInteger)maximumNumberOfSecondaryLargeTextLines;
-(struct CGRect )_actionsViewFrame;
-(struct CGRect )_mainContentViewFrame;
-(struct CGSize )_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize )arg0 ;
-(struct CGSize )_contentViewSize;
-(void)_configureCustomContentView;
-(void)_configureLookViewTapGestureRecognizerIfNecessary;
-(void)_configureNotificationContentViewIfNecessary;
-(void)_layoutCustomContentView;
-(void)_layoutCustomContentViewInRelationToContentView;
-(void)_layoutNotificationContentView;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)layoutSubviews;
-(void)notificationContentView:(id)arg0 willInteractWithURL:(id)arg1 ;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(NSUInteger)arg0 ;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif