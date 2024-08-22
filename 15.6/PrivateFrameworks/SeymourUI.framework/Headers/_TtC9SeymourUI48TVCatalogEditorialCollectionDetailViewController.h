// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI48TVCATALOGEDITORIALCOLLECTIONDETAILVIEWCONTROLLER_H
#define _TTC9SEYMOURUI48TVCATALOGEDITORIALCOLLECTIONDETAILVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI48TVCatalogEditorialCollectionDetailViewController : UIViewController {
    ? lastFocusedIndexPath;
    ? resignActiveObserver;
    ? settlingTimer;
    ? visibility;
    ? dataProvider;
    ? dependencies;
    ? eventHub;
    ? gradientMaskLayer;
    ? layout;
    ? timerProvider;
    ? artworkView;
    ? bottomBlurView;
    ? shroudView;
    ? titleLabel;
    ? subtitleLabel;
    ? editorialLayout;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif