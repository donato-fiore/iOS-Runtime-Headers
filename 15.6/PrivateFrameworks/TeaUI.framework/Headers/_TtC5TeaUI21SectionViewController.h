// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5TEAUI21SECTIONVIEWCONTROLLER_H
#define _TTC5TEAUI21SECTIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC5TeaUI21SectionViewController : UIViewController {
    ? dataSource;
    ? isSectionSelectorHidden;
    ? autoHideSectionSelector;
    ? selectedSectionIndex;
    ? sectionTitleColor;
    ? toolbarManager;
    ? currentSection;
    ? scrollViewProxyManager;
    ? barCompressionManager;
    ? styler;
    ? sectionsBarButtonItem;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif