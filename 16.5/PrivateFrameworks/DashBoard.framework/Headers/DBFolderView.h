// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBFOLDERVIEW_H
#define DBFOLDERVIEW_H

@class SBRootFolderView, NSLayoutConstraint;
@protocol DBEnvironment;


#import "DBScrollButton.h"

@interface DBFolderView : SBRootFolderView

@property (nonatomic) BOOL buttonUXEnabled; // ivar: _buttonUXEnabled
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (retain, nonatomic) NSLayoutConstraint *leadingScrollArrowLeadingConstraint; // ivar: _leadingScrollArrowLeadingConstraint
@property (nonatomic) UIEdgeInsets listViewInsets; // ivar: _listViewInsets
@property (retain, nonatomic) DBScrollButton *scrollLeftButton; // ivar: _scrollLeftButton
@property (retain, nonatomic) DBScrollButton *scrollRightButton; // ivar: _scrollRightButton
@property (retain, nonatomic) NSLayoutConstraint *trailingScrollArrowTrailingConstraint; // ivar: _trailingScrollArrowTrailingConstraint


+(CGFloat)maximumPageControlHeightForInteractionAffordances:(NSUInteger)arg0 ;
+(Class)_scrollViewClass;
+(NSUInteger)countOfAdditionalPagesToKeepVisibleInOneDirection;
-(BOOL)_showsButtons;
-(BOOL)_useParallaxOnPageControl;
-(BOOL)hidesOffscreenCustomPageViews;
-(BOOL)shouldInstallFocusGuides;
-(CGFloat)_listViewSideInset;
-(CGFloat)_offsetToCenterPageControlInSpaceForPageControl;
-(CGFloat)internalDockPageControlVerticalMargin;
-(CGFloat)pageControlAreaHeight;
-(NSInteger)defaultPageIndex;
-(NSInteger)iconVisibilityHandling;
-(NSInteger)orientation;
-(id)_newPageControl;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct UIEdgeInsets )_listViewVerticalInset;
-(void)_layoutSubviews;
-(void)_scrollButtonPressed:(id)arg0 ;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(NSInteger)arg0 ;
-(void)_updateScrollButtonStatesForIndex:(NSInteger)arg0 ;
-(void)setLeadingCustomViewVisibilityProgress:(CGFloat)arg0 ;


@end


#endif