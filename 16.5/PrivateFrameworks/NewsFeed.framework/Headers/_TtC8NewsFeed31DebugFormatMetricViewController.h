// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED31DEBUGFORMATMETRICVIEWCONTROLLER_H
#define _TTC8NEWSFEED31DEBUGFORMATMETRICVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed31DebugFormatMetricViewController : UIViewController {
    ? tableView;
    ? editor;
    ? unsortedSections;
    ? sections;
    ? overlayView;
    ? coverViewManager;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)onScrollToSelectedMetric;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif