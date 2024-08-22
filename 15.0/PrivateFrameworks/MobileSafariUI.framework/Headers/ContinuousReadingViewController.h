// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTINUOUSREADINGVIEWCONTROLLER_H
#define CONTINUOUSREADINGVIEWCONTROLLER_H

@class SFBannerTheme, _SFWebView, NSString, UIScrollView, UIView;
@protocol UIScrollViewDelegate, ContinuousReadingViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "ContinuousReadingItem.h"
#import "ContinuousReadingPreviewView.h"
#import "ContinuousReadingBannerView.h"

@interface ContinuousReadingViewController : NSObject <UIScrollViewDelegate>

 {
    SFBannerTheme *_bannerTheme;
}


@property (readonly, nonatomic, getter=isCommittingToContinuousDocument) BOOL committingToContinuousDocument; // ivar: _committingToContinuousDocument
@property (retain, nonatomic) ContinuousReadingItem *currentItem; // ivar: _currentItem
@property (weak, nonatomic) _SFWebView *currentWebView; // ivar: _currentWebView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ContinuousReadingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_outerScrollView, setter=_setOuterScrollView:) UIScrollView *outerScrollView; // ivar: _outerScrollView
@property (retain, nonatomic) ContinuousReadingPreviewView *previewView; // ivar: _previewView
@property (retain, nonatomic) ContinuousReadingPreviewView *previousItemPreviewView; // ivar: _previousItemPreviewView
@property (readonly, nonatomic) CGFloat scrollOffsetYForCurrentDocument;
@property (readonly, nonatomic, getter=isScrollingToNextContinuousDocument) BOOL scrollingToNextContinuousDocument; // ivar: _scrollingToNextContinuousDocument
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressingAutoScroll) BOOL suppressingAutoScroll; // ivar: _suppressingAutoScroll
@property (readonly, nonatomic) ContinuousReadingBannerView *topBannerView;
@property (readonly, nonatomic, getter=isUserInteractingWithContainer) BOOL userInteractingWithContainer;
@property (readonly, retain, nonatomic) UIView *view;


-(CGFloat)_scrollOffsetYForNextDocument;
-(CGFloat)_scrollOffsetYForPreviousDocument;
-(void)_commitToNextContinuousDocument;
-(void)_commitToPreviousContinuousDocument;
-(void)_willCommitToContinuousDocumentInPreviewView:(id)arg0 ;
-(void)didCreateWebViewForNextDocument:(id)arg0 ;
-(void)didCreateWebViewForPreviousDocument:(id)arg0 ;
-(void)innerScrollViewDidScroll:(id)arg0 ;
-(void)loadNextItem;
-(void)loadPreviousItem;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBannerTheme:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateOuterScrollView;


@end


#endif