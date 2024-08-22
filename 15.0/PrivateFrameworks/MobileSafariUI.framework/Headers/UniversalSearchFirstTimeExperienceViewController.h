// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNIVERSALSEARCHFIRSTTIMEEXPERIENCEVIEWCONTROLLER_H
#define UNIVERSALSEARCHFIRSTTIMEEXPERIENCEVIEWCONTROLLER_H

@class UIViewController, SearchUIFirstTimeExperienceViewController, UIScrollView, NSString;
@protocol SearchUIFirstTimeExperienceDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate;



@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate>

 {
    SearchUIFirstTimeExperienceViewController *_firstTimeExperienceViewController;
    UIScrollView *_scrollView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UniversalSearchFirstTimeExperienceViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasShownParsecFirstTimeUserExperience;
+(void)userDidInteractWithParsecFirstTimeUserExperience;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)firstTimeExperienceContinueButtonPressed;
-(void)unifiedFieldDidChange;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif