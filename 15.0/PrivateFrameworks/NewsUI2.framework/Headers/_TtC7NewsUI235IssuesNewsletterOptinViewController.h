// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI235ISSUESNEWSLETTEROPTINVIEWCONTROLLER_H
#define _TTC7NEWSUI235ISSUESNEWSLETTEROPTINVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC7NewsUI235IssuesNewsletterOptinViewController : UIViewController {
    ? eventHandler;
    ? obController;
    ? micaView;
    ? contentViewHeightConstraint;
    ? includeIssuesButton;
    ? notNowButton;
    ? titleText;
    ? detailText;
    ? includeIssuesButtonText;
    ? notNowButtonText;
    ? privacyBundleIdentifier;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)includeIssues;
-(void)notNow;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif