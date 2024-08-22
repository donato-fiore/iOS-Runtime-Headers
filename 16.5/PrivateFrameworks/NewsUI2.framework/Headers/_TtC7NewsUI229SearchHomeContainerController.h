// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI229SEARCHHOMECONTAINERCONTROLLER_H
#define _TTC7NEWSUI229SEARCHHOMECONTAINERCONTROLLER_H

@class TUViewController;



@interface _TtC7NewsUI229SearchHomeContainerController : TUViewController {
    ? searchBar;
    ? delegate;
    ? styler;
    ? searchHomeViewController;
    ? searchResultsViewController;
    ? toolbarManager;
    ? currentSearchTerm;
}




-(id)contentScrollView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif