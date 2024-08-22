// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABOVERVIEWITEMVIEW2_H
#define TABOVERVIEWITEMVIEW2_H

@class UIView, UIButton, NSString, UIImage;
@protocol TabOverviewItemView;


#import "TabIconAndTitleView.h"
#import "TabThumbnailRecordingIndicator.h"
#import "TabSnapshotImageView.h"

@interface TabOverviewItemView2 : UIView <TabOverviewItemView>

 {
    TabIconAndTitleView *_titleView;
    UIView *_placeholderView;
    UIView *_snapshotClipperView;
    UIView *_borrowedContentView;
    CGFloat _borrowedContentHeaderHeight;
    UIView *_shadowView;
    TabThumbnailRecordingIndicator *_recordingIndicatorView;
}


@property (readonly, nonatomic, getter=isAccessibilityContentSize) BOOL accessibilityContentSize; // ivar: _accessibilityContentSize
@property (retain, nonatomic) UIView *attachedView; // ivar: _attachedView
@property (nonatomic) CGRect attachedViewReferenceRect; // ivar: _attachedViewReferenceRect
@property (retain, nonatomic) TabSnapshotImageView *blankSnapshotView; // ivar: _blankSnapshotView
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) CGFloat closeButtonLeftInset; // ivar: _closeButtonLeftInset
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly, nonatomic) NSInteger effectiveHeaderMode; // ivar: _effectiveHeaderMode
@property (nonatomic) CGFloat extraTitleScale; // ivar: _extraTitleScale
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headerBackgroundViewAlpha; // ivar: _headerBackgroundViewAlpha
@property (nonatomic) CGFloat headerCornerRadius; // ivar: _headerCornerRadius
@property (nonatomic) BOOL hidesTabTitle; // ivar: _hidesTabTitle
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic) NSInteger preferredHeaderMode; // ivar: _preferredHeaderMode
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) BOOL showsCloseButton; // ivar: _showsCloseButton
@property (retain, nonatomic) TabSnapshotImageView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tabLayout; // ivar: _tabLayout
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat titleAlpha; // ivar: _titleAlpha
@property (nonatomic) CGFloat titleHeight; // ivar: _titleHeight
@property (nonatomic) CGFloat titleOffset; // ivar: _titleOffset
@property (nonatomic) CGFloat titleScale; // ivar: _titleScale
@property (nonatomic) CGFloat topBackdropHeight; // ivar: _topBackdropHeight
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (readonly, nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme
@property (nonatomic) CGFloat verticalTextAlignmentAdjustment; // ivar: _verticalTextAlignmentAdjustment
@property (nonatomic) CGSize windowSize; // ivar: _windowSize


+(void)initialize;
-(BOOL)canBecomeFocused;
-(BOOL)containsBorrowedContentView:(id)arg0 ;
-(CGFloat)_scaledHeaderHeight;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentSizeCategory;
-(void)insertBorrowedContentView:(id)arg0 headerHeight:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)removeBorrowedContentView:(id)arg0 ;
-(void)takeOwnershipOfAttachedView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateHeaderView;
-(void)updateSnapshotWithImage:(id)arg0 ;


@end


#endif