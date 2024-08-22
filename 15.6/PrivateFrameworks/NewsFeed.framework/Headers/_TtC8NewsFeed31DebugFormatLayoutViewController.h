// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED31DEBUGFORMATLAYOUTVIEWCONTROLLER_H
#define _TTC8NEWSFEED31DEBUGFORMATLAYOUTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed31DebugFormatLayoutViewController : UIViewController {
    ? delegate;
    ? tableView;
    ? overlayView;
    ? tree;
    ? editor;
    ? $__lazy_storage_$_heatmapToolbar;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapOnOverlay:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif