// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTTABLEVIEWAPPLOCKUPCELL_H
#define DMCENROLLMENTTABLEVIEWAPPLOCKUPCELL_H

@class UITableViewCell, NSString, NSNumber, ASCLockupView, UIViewController;
@protocol ASCLockupViewDelegate, DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewAppLockupCell : UITableViewCell <ASCLockupViewDelegate, DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *iTunesItemID; // ivar: _iTunesItemID
@property (retain, nonatomic) ASCLockupView *lockupView; // ivar: _lockupView
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)cell;
-(id)initWithLockupRequest:(id)arg0 lockupViewGroup:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif