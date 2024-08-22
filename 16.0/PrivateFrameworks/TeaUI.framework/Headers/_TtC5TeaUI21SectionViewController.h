// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI21SECTIONVIEWCONTROLLER_H
#define _TTC5TEAUI21SECTIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC5TeaUI21SectionViewController : UIViewController {
    ? dataSource;
    ? delegate;
    ? sectionTitleColor;
    ? _selectedSectionIndex;
    ? presentation;
    ? sectionBarTintColor;
    ? barBackgroundColor;
    ? toolbarManager;
    ? currentSection;
    ? scrollViewProxyManager;
    ? barCompressionManager;
    ? $__lazy_storage_$_sectionsBarButtonItem;
    ? $__lazy_storage_$_sectionsSegmentedView;
    ? $__lazy_storage_$_sectionSelectorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif