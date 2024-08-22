// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINSETTABLEVIEWCONTROLLER_H
#define WFINSETTABLEVIEWCONTROLLER_H

@class UITableViewController;



@interface WFInsetTableViewController : UITableViewController {
    BOOL _sectionContentInsetInitialized;
}




-(BOOL)_isRegularWidth;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif