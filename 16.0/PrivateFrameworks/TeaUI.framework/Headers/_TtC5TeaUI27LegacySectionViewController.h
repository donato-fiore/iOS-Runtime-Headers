// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI27LEGACYSECTIONVIEWCONTROLLER_H
#define _TTC5TEAUI27LEGACYSECTIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC5TeaUI27LegacySectionViewController : UIViewController {
    ? dataSource;
    ? delegate;
    ? sectionTitleColor;
    ? isSectionSelectorHidden;
    ? autoHideSectionSelector;
    ? toolbarManager;
    ? sectionSelectorView;
    ? currentSection;
    ? scrollViewProxyManager;
    ? barCompressionManager;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif