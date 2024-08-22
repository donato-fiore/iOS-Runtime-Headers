// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKSHAREDCONTENTVIEWCONTROLLER_H
#define CNKSHAREDCONTENTVIEWCONTROLLER_H

@class UIViewController;
@protocol CNKSharedContentViewControllerDelegate;



@interface CNKSharedContentViewController : UIViewController {
    ? participant;
    ? scrollView;
    ? sharedContentView;
    ? previousViewModel;
    ? previousScreenSnapshot;
    ? avatarImageQueue;
}


@property (nonatomic, weak) NSObject<CNKSharedContentViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL isPipped; // ivar: isPipped


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif