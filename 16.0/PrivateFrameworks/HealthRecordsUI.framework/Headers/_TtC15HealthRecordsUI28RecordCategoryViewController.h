// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI28RECORDCATEGORYVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI28RECORDCATEGORYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15HealthRecordsUI28RecordCategoryViewController : UIViewController {
    ? profile;
    ? category;
    ? preferredSegment;
    ? factory;
    ? countProvider;
    ? requiresOnboardingCanceller;
    ? recordCanceller;
    ? aToZCanceller;
    ? labsCanceller;
    ? requiresOnboarding;
    ? recordCount;
    ? currentViewController;
    ? displayMode;
    ? isSearching;
    ? isModePickerHidden;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_modePicker;
    ? $__lazy_storage_$_resultViewController;
    ? $__lazy_storage_$_searchController;
    ? $__lazy_storage_$_navigationPalette;
    ? $__lazy_storage_$_changeProvider;
    ? $__lazy_storage_$_listManager;
    ? $__lazy_storage_$_viewDataPublisher;
    ? $__lazy_storage_$_udcListViewController;
    ? $__lazy_storage_$_latestViewContoller;
    ? $__lazy_storage_$_lastUpdatedViewController;
    ? $__lazy_storage_$_alphabeticalViewController;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)modePickerDidChange:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tapToRadar:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif