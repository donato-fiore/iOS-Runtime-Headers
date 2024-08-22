// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTINSTALLAPPBUTTONVIEW_H
#define DMCENROLLMENTINSTALLAPPBUTTONVIEW_H

@class UIView, NSString, ASCLockupView;
@protocol ASCLockupViewDelegate_ForTVProvider;



@interface DMCEnrollmentInstallAppButtonView : UIView <ASCLockupViewDelegate_ForTVProvider>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ASCLockupView *lockupView; // ivar: _lockupView
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (readonly) Class superclass;


-(BOOL)lockupViewShouldSupportDSIDLessInstalls:(id)arg0 ;
-(id)initWithLockupRequest:(id)arg0 lockupViewGroup:(id)arg1 completionHandler:(id)arg2 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)lockupView:(id)arg0 appStateDidChange:(id)arg1 ;


@end


#endif