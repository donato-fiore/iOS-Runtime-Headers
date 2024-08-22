// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDOSUPPORTAPPTABLEVIEWCELL_H
#define NDOSUPPORTAPPTABLEVIEWCELL_H

@class PSTableCell, NSString, ASCLockupView;
@protocol ASCLockupViewDelegate;



@interface NDOSupportAppTableViewCell : PSTableCell <ASCLockupViewDelegate>

 {
    NSString *_supportAppURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ASCLockupView *lockupView; // ivar: _lockupView
@property (readonly) Class superclass;


+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)parentViewController;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupAppSuportCell;
-(void)layoutSubviews;
-(void)lockupView:(id)arg0 appStateDidChange:(id)arg1 ;
-(void)lockupView:(id)arg0 didFailRequestWithError:(id)arg1 ;
-(void)lockupViewDidBeginRequest:(id)arg0 ;
-(void)lockupViewDidFinishRequest:(id)arg0 ;
-(void)openButtonAction;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif