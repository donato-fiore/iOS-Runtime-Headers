// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABOVERVIEWITEMVIEW_H
#define TABOVERVIEWITEMVIEW_H

@class UIView, UIButton, UIImage, NSString, _SFBarTheme;


#import "TabThumbnailRecordingIndicator.h"
#import "TabIconAndTitleView.h"
#import "TabSnapshotImageView.h"

@interface TabOverviewItemView : UIView {
    CGFloat _borrowedContentHeaderHeight;
    UIView *_borrowedContentView;
    BOOL _contentSizeIsAccessibilityCategory;
    UIView *_headerBackgroundView;
    UIView *_placeholderView;
    NSInteger _preferredHeaderMode;
    TabThumbnailRecordingIndicator *_recordingIndicatorView;
    UIView *_snapshotClipperView;
    UIView *_shadowView;
    TabIconAndTitleView *_titleView;
}


@property (retain, nonatomic) UIView *attachedView; // ivar: _attachedView
@property (nonatomic) CGRect attachedViewReferenceRect; // ivar: _attachedViewReferenceRect
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) BOOL showsCloseButton; // ivar: _showsCloseButton
@property (retain, nonatomic) TabSnapshotImageView *snapshotView; // ivar: _snapshotView
@property (nonatomic) NSInteger tabLayout; // ivar: _tabLayout
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) CGFloat titleHeight; // ivar: _titleHeight
@property (readonly, nonatomic) UIEdgeInsets titlePadding;
@property (nonatomic) CGFloat topBackdropHeight; // ivar: _topBackdropHeight
@property (retain, nonatomic) _SFBarTheme *topBarTheme; // ivar: _topBarTheme
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (nonatomic) CGSize windowSize; // ivar: _windowSize


+(void)initialize;
-(BOOL)canBecomeFocused;
-(BOOL)containsBorrowedContentView:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)effectiveHeaderMode;
-(NSUInteger)accessibilityTraits;
-(id)_headerBackgroundColor;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentSizeCategory;
-(void)insertBorrowedContentView:(id)arg0 headerHeight:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)removeBorrowedContentView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSnapshotWithImage:(id)arg0 ;


@end


#endif