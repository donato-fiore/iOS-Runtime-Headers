// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI20EXPANDVIEWCONTROLLER_H
#define _TTC17PROMOTEDCONTENTUI20EXPANDVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC17PromotedContentUI20ExpandViewController : UIViewController {
    ? webView;
    ? closeButton;
    ? maximumExpandedSize;
    ? expandedDestinationURL;
    ? tapGestureRecognizer;
    ? navigationCoordinator;
    ? webProcessDelegate;
    ? actionDelegate;
    ? $__lazy_storage_$_closeButtonPadding;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)closeButtonTappedWithSender:(id)arg0 ;
-(void)dealloc;
-(void)tapRecognized:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif