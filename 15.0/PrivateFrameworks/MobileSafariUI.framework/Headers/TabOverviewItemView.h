// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABOVERVIEWITEMVIEW_H
#define TABOVERVIEWITEMVIEW_H

@class UIView, UIButton, NSString, UIImage;
@protocol TabOverviewItemView;


#import "TabThumbnailView.h"
#import "TabSnapshotImageView.h"

@interface TabOverviewItemView : TabThumbnailView <TabOverviewItemView>

 {
    BOOL _hasBorrowedContentView;
}


@property (readonly, nonatomic, getter=isAccessibilityContentSize) BOOL accessibilityContentSize;
@property (retain, nonatomic) UIView *attachedView; // ivar: _attachedView
@property (nonatomic) CGRect attachedViewReferenceRect; // ivar: _attachedViewReferenceRect
@property (retain, nonatomic) TabSnapshotImageView *blankSnapshotView;
@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) CGFloat closeButtonLeftInset;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly, nonatomic) NSInteger effectiveHeaderMode;
@property (nonatomic) CGFloat extraTitleScale;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headerBackgroundViewAlpha;
@property (nonatomic) CGFloat headerCornerRadius;
@property (nonatomic) BOOL hidesTabTitle;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) NSUInteger mediaStateIcon;
@property (nonatomic) NSInteger preferredHeaderMode;
@property (readonly, nonatomic) UIView *previewView;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) BOOL showsCloseButton;
@property (retain, nonatomic) TabSnapshotImageView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tabLayout; // ivar: _tabLayout
@property (nonatomic) NSInteger tintStyle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat titleAlpha;
@property (nonatomic) CGFloat titleHeight;
@property (nonatomic) CGFloat titleOffset;
@property (nonatomic) CGFloat titleScale;
@property (nonatomic) CGFloat topBackdropHeight; // ivar: _topBackdropHeight
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (nonatomic) CGFloat verticalTextAlignmentAdjustment;
@property (nonatomic) CGSize windowSize; // ivar: _windowSize


-(BOOL)canBecomeFocused;
-(BOOL)containsBorrowedContentView:(id)arg0 ;
-(BOOL)headerHasFinishedAnimating;
-(id)focusEffect;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGRect )headerViewFrame;
-(struct UIEdgeInsets )headerViewInsets;
-(void)insertBorrowedContentView:(id)arg0 headerHeight:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)removeBorrowedContentView:(id)arg0 ;
-(void)takeOwnershipOfAttachedView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSnapshotWithImage:(id)arg0 ;


@end


#endif