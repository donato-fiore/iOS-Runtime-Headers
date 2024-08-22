// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUIACTIVITYPICKERVIEWCONTROLLER_H
#define FCUIACTIVITYPICKERVIEWCONTROLLER_H

@class UIViewController, FCActivityManager, NSString;
@protocol FCActivityManagerObserving;


#import "_TtC7FocusUI26ActivityEditViewController.h"

@interface FCUIActivityPickerViewController : UIViewController <FCActivityManagerObserving>

 {
    BOOL _isConfiguringEducationCard;
}


@property (retain, nonatomic, getter=_activityManager, setter=_setActivityManager:) FCActivityManager *activityManager; // ivar: _activityManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_editViewController, setter=_setEditViewController:) _TtC7FocusUI26ActivityEditViewController *editViewController; // ivar: _editViewController
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom; // ivar: _footerPinnedToBottom
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isOnboardingComplete;
+(BOOL)isOnboardingEncountered;
+(void)_markOnboardingComplete;
+(void)_markOnboardingEncountered;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isConfiguringEducationCard;
-(BOOL)_updateHeaderOrFooterIfNecessary;
-(id)_activityListView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )setContractedFrame:(struct CGRect )arg0 representedActivity:(id)arg1 presentationStyle:(NSInteger)arg2 transitionCoordinator:(id)arg3 ;
-(struct CGRect )setExpandedFrame:(struct CGRect )arg0 initialFrame:(struct CGRect )arg1 representedActivity:(id)arg2 presentationStyle:(NSInteger)arg3 transitionCoordinator:(id)arg4 ;
-(void)_configureActivityListViewWithAvailableActivities:(id)arg0 ;
-(void)_configureActivityView:(id)arg0 withLifetimesDescriptionsForActivity:(id)arg1 ;
-(void)_configureEducationCardIfNecessary;
-(void)_dismissHeader;
-(void)_openEditUI:(id)arg0 ;
-(void)_openSetupUI:(id)arg0 ;
-(void)_openURL:(id)arg0 ;
-(void)_presentActivityEditUI:(id)arg0 ;
-(void)_setConfiguringEducationCard:(BOOL)arg0 ;
-(void)_updatePreferredContentSize;
-(void)_updateSelectedStateOfActivityControl:(id)arg0 activeActivity:(id)arg1 lifetimeOfActiveActivity:(id)arg2 ;
-(void)_updateSelectedStateOfActivityViews;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)activeActivityLifetimeDidChangeForManager:(id)arg0 ;
-(void)activityManager:(id)arg0 lifetimeDescriptionsDidChangeForActivity:(id)arg1 ;
-(void)availableActivitiesDidChangeForManager:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif