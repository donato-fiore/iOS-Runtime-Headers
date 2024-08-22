// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKONBOARDINGFRIENDSSUGGESTIONSVIEWCONTROLLER_H
#define GKONBOARDINGFRIENDSSUGGESTIONSVIEWCONTROLLER_H

@class UIViewController;



@interface GKOnboardingFriendsSuggestionsViewController : UIViewController {
    ? hostingController;
    ? invitedContacts;
    ? friendRecommendations;
    ? dataUpdateDelegate;
    ? $__lazy_storage_$_metricsContext;
}




-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif