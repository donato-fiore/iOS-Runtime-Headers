// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLSCRUBVIEW_H
#define QLSCRUBVIEW_H

@class UIView, NSMutableDictionary, NSMutableArray, NSString;
@protocol UIGestureRecognizerDelegate, QLScrubViewDataSource, QLScrubViewDelegate;


#import "QLThumbnailView.h"
#import "QLPageNumberView.h"

@interface QLScrubView : UIView <UIGestureRecognizerDelegate>

 {
    BOOL _needsThumbLayout;
    CGFloat _thumbOrigin;
    CGFloat _thumbEnd;
    CGFloat _thumbHeight;
    NSInteger _pageCount;
    NSInteger _selectedPage;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
}


@property (nonatomic) CGFloat bottomOffset; // ivar: _bottomOffset
@property (weak) NSObject<QLScrubViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<QLScrubViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topOffset; // ivar: _topOffset


+(CGFloat)defaultWidth;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)init;
-(struct CGRect )_thumbnailFrameForPageAtIndex:(NSInteger)arg0 ;
-(void)_handleSwipAtLocation:(struct CGPoint )arg0 ;
-(void)_hidePageLabel;
-(void)_notifyPageChanged;
-(void)_removeThumbviews;
-(void)_showPageLabel;
-(void)_updatePageLabelPosition;
-(void)_updateSelectedThumbnailView;
-(void)layoutSubviews;
-(void)longTapReceived:(id)arg0 ;
-(void)panReceived:(id)arg0 ;
-(void)reloadThumbnails;
-(void)selectPageNumber:(NSInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tapReceived:(id)arg0 ;


@end


#endif