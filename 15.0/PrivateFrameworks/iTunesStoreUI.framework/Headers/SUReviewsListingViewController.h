// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUREVIEWSLISTINGVIEWCONTROLLER_H
#define SUREVIEWSLISTINGVIEWCONTROLLER_H



#import "SUStructuredPageViewController.h"
#import "SUButtonAccessoryView.h"

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}




-(BOOL)_canWriteReview;
-(id)_accessoryView;
-(id)_headerItem;
-(id)newTermsAndConditionsFooter;
-(void)_reloadHeaderView;
-(void)_writeAReview:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadData;
-(void)reloadForChangedRowCount:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif