// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONSIDEBARVIEW_H
#define ICATTRIBUTIONSIDEBARVIEW_H

@class UIView, NSMapTable, TTTextEditFilter, ICSelectorDelayer;


#import "ICAttributionLayoutManager.h"
#import "ICAuthorHighlightsUpdater.h"
#import "ICAttributionViewConfiguration.h"
#import "ICTextView.h"

@interface ICAttributionSidebarView : UIView

@property (retain, nonatomic) ICAttributionLayoutManager *attributionLayoutManager; // ivar: _attributionLayoutManager
@property (retain, nonatomic) NSMapTable *attributionViewMap; // ivar: _attributionViewMap
@property (weak, nonatomic) ICAuthorHighlightsUpdater *authorHighlightsUpdater; // ivar: _authorHighlightsUpdater
@property (nonatomic) BOOL didExpandSidebar; // ivar: _didExpandSidebar
@property (copy, nonatomic) TTTextEditFilter *filter; // ivar: _filter
@property (retain, nonatomic) ICAttributionViewConfiguration *focusedAttributionViewConfiguration; // ivar: _focusedAttributionViewConfiguration
@property (readonly, nonatomic) CGFloat fullContentWidth;
@property (readonly, nonatomic) CGFloat previewContentWidth;
@property (readonly, nonatomic) ICSelectorDelayer *reloadAttributionsDelayer; // ivar: _reloadAttributionsDelayer
@property (weak, nonatomic) ICTextView *textView; // ivar: _textView
@property (nonatomic) CGFloat visibleContentWidth; // ivar: _visibleContentWidth


-(BOOL)accessibilityElementsHidden;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)analyticsSessionWillEnd:(id)arg0 ;
-(void)focusAttributionView:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reload;
-(void)reloadAttributions;
-(void)reloadAttributionsWithCompletion:(id)arg0 ;
-(void)removeAllAttributionViews;
-(void)renderAttributionView:(id)arg0 ;
-(void)renderAttributions;
-(void)scrollToRangeIfNeeded:(struct _NSRange )arg0 ;
-(void)textViewLayoutDidChange:(id)arg0 ;
-(void)unfocusAttributionDetails;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif