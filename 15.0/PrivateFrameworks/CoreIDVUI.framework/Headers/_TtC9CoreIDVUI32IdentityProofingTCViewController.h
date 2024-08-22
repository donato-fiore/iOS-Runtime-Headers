// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI32IDENTITYPROOFINGTCVIEWCONTROLLER_H
#define _TTC9COREIDVUI32IDENTITYPROOFINGTCVIEWCONTROLLER_H

@class UIViewController;
@protocol RemoteUIControllerDelegate;



@interface _TtC9CoreIDVUI32IdentityProofingTCViewController : UIViewController <RemoteUIControllerDelegate>

 {
    ? config;
    ? agreeButtonName;
    ? disagreeButtonName;
    ? proofingFlowManager;
    ? agreeClicked;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif