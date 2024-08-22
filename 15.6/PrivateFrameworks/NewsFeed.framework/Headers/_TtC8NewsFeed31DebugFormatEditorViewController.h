// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED31DEBUGFORMATEDITORVIEWCONTROLLER_H
#define _TTC8NEWSFEED31DEBUGFORMATEDITORVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed31DebugFormatEditorViewController : UIViewController {
    ? delegate;
    ? editor;
    ? formatManager;
    ? packages;
    ? errorViewController;
    ? groupViewController;
    ? canvasViewController;
    ? scrollView;
    ? rulerView;
    ? $__lazy_storage_$_overlayView;
    ? contentView;
    ? snapshotCanvasView;
    ? backgroundView;
    ? statusView;
    ? zoomLabel;
    ? styler;
    ? lastLayoutBounds;
    ? editorPathView;
    ? editorToolbarItems;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif