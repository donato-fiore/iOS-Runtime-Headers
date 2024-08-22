// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSDASHBOARDESTIMATESVIEWCONTROLLER_H
#define CPSDASHBOARDESTIMATESVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, UIView;
@protocol CPSNavigationDisplaying, CPSSafeAreaDelegate;


#import "CPSDashboardEstimatesView.h"

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSDashboardEstimatesView *estimatesView; // ivar: _estimatesView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *platterBottomConstraint; // ivar: _platterBottomConstraint
@property (readonly, nonatomic) UIView *platterView; // ivar: _platterView
@property (weak, nonatomic) NSObject<CPSSafeAreaDelegate> *safeAreaDelegate; // ivar: _safeAreaDelegate
@property (readonly) Class superclass;


-(struct UIEdgeInsets )_safeAreaInsets;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)updateTripEstimates:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif