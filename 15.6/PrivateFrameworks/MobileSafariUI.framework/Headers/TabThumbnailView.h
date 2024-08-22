// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABTHUMBNAILVIEW_H
#define TABTHUMBNAILVIEW_H

@class UIView, UIButton, UIImage, UIColor, NSString, UIFont;
@protocol OS_dispatch_queue;


#import "TabIconAndTitleView.h"

@interface TabThumbnailView : UIView {
    UIView *_headerView;
    UIView *_headerBackgroundView;
    TabIconAndTitleView *_iconAndTitleView;
    NSObject<OS_dispatch_queue> *_titleMeasurementQueue;
    CGSize _titleSize;
    CGFloat _headerViewAlpha;
    CGFloat _headerBackgroundViewAlpha;
    BOOL _titleTextNeedsUpdate;
}


@property (readonly, nonatomic, getter=isAccessibilityContentSize) BOOL accessibilityContentSize; // ivar: _isAccessibilityContentSize
@property (readonly, nonatomic) UIView *blankSnapshotView; // ivar: _blankSnapshotView
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) UIImage *closeButtonImage;
@property (nonatomic) CGFloat closeButtonLeftInset; // ivar: _closeButtonLeftInset
@property (readonly, nonatomic) NSInteger effectiveHeaderMode;
@property (nonatomic) CGFloat extraTitleScale; // ivar: _extraTitleScale
@property (readonly, nonatomic) UIColor *headerBackgroundColor;
@property (readonly, nonatomic) UIView *headerBackgroundView;
@property (nonatomic) CGFloat headerBackgroundViewAlpha;
@property (readonly, nonatomic) CGRect headerBackgroundViewFrame;
@property (nonatomic) CGFloat headerCornerRadius; // ivar: _headerCornerRadius
@property (nonatomic) BOOL headerHasFinishedAnimating; // ivar: _headerHasFinishedAnimating
@property (readonly, nonatomic) CGRect headerViewFrame;
@property (readonly, nonatomic) UIEdgeInsets headerViewInsets;
@property (nonatomic) BOOL hidesTabTitle; // ivar: _hidesTabTitle
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) id *layoutAnimator; // ivar: _layoutAnimator
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic) NSInteger preferredHeaderMode; // ivar: _preferredHeaderMode
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic) BOOL showsCloseButton;
@property (readonly, nonatomic) UIView *snapshotClipperView; // ivar: _snapshotClipperView
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat titleAlpha;
@property (readonly, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) CGFloat titleHeight; // ivar: _titleHeight
@property (readonly, nonatomic) BOOL titleIsHorizontallyCentered; // ivar: _titleIsHorizontallyCentered
@property (nonatomic) CGFloat titleOffset; // ivar: _titleOffset
@property (nonatomic) CGFloat titleScale; // ivar: _titleScale
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (nonatomic) CGFloat verticalTextAlignmentAdjustment; // ivar: _verticalTextAlignmentAdjustment


+(CGFloat)titleHeightForAccessibilityContentSize:(BOOL)arg0 ;
+(id)titleFontForTraitCollection:(id)arg0 ;
+(void)setShowsIconsInTabs:(BOOL)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setHeaderColorScheme;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateHeaderView;


@end


#endif