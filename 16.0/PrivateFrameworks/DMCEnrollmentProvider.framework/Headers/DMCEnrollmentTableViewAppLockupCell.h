// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTTABLEVIEWAPPLOCKUPCELL_H
#define DMCENROLLMENTTABLEVIEWAPPLOCKUPCELL_H

@class UITableViewCell, NSString, NSNumber, ASCLockupView, UIViewController;
@protocol ASCLockupViewDelegate_ForTVProvider, DMCEnrollmentTableViewCellDataSource;



@interface DMCEnrollmentTableViewAppLockupCell : UITableViewCell <ASCLockupViewDelegate_ForTVProvider, DMCEnrollmentTableViewCellDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *iTunesItemID; // ivar: _iTunesItemID
@property (retain, nonatomic) ASCLockupView *lockupView; // ivar: _lockupView
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)lockupViewShouldSupportDSIDLessInstalls:(id)arg0 ;
-(CGFloat)cellHeight;
-(CGFloat)estimatedCellHeight;
-(id)cell;
-(id)initWithLockupRequest:(id)arg0 lockupViewGroup:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(void)layoutSubviews;
-(void)lockupView:(id)arg0 appStateDidChange:(id)arg1 ;


@end


#endif