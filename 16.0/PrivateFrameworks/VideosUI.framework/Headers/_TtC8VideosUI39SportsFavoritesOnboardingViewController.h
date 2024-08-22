// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI39SPORTSFAVORITESONBOARDINGVIEWCONTROLLER_H
#define _TTC8VIDEOSUI39SPORTSFAVORITESONBOARDINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8VideosUI39SportsFavoritesOnboardingViewController : UIViewController {
    ? viewModel;
    ? $__lazy_storage_$_controller;
    ? imageView;
    ? confirmationButton;
    ? deferButton;
    ? lastRecordedPageEventData;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doConfirmationAction;
-(void)doDeferAction;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif