// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI25LANDINGPAGEVIEWCONTROLLER_H
#define _TTC8VIDEOSUI25LANDINGPAGEVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI25LandingPageViewController : TtC8VideosUI17VUIViewController {
    ? collectionImpressioner;
    ? delegate;
    ? pageMetrics;
    ? document;
    ? activeServiceRequest;
    ? stackViewController;
    ? lastRefreshTime;
    ? refreshTTL;
    ? notificationCenter;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;
-(void)vui_willMoveToParentViewController:(id)arg0 ;


@end


#endif