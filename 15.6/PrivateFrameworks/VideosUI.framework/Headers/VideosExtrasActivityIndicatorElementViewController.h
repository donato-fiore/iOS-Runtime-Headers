// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASACTIVITYINDICATORELEMENTVIEWCONTROLLER_H
#define VIDEOSEXTRASACTIVITYINDICATORELEMENTVIEWCONTROLLER_H



#import "VideosExtrasViewElementViewController.h"
#import "VideosExtrasActivityIndicator.h"

@interface VideosExtrasActivityIndicatorElementViewController : VideosExtrasViewElementViewController {
    VideosExtrasActivityIndicator *_activityView;
}




-(BOOL)matchParentHeight;
-(void)_prepareLayout;
-(void)viewDidLoad;


@end


#endif