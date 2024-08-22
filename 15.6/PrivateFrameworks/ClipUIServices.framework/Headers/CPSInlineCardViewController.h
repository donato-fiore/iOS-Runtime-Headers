// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSINLINECARDVIEWCONTROLLER_H
#define CPSINLINECARDVIEWCONTROLLER_H

@class UIViewController, PRXCardContainerViewController, NSString, NSURL;
@protocol CPSLaunchContentViewControllerDelegate, CPSInlineCardViewDelegate, CPSInlineCardViewControllerDelegate;


#import "CPSLaunchContentViewController.h"

@interface CPSInlineCardViewController : UIViewController <CPSLaunchContentViewControllerDelegate, CPSInlineCardViewDelegate>

 {
    CPSLaunchContentViewController *_launchContentViewController;
    PRXCardContainerViewController *_proxController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSInlineCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(void)initialize;
-(id)initWithURL:(id)arg0 ;
-(void)_setupInlineCardViewWithProxCardKit;
-(void)didTapBackgroundView:(id)arg0 ;
-(void)launchContentViewController:(id)arg0 didTapCloseButton:(BOOL)arg1 ;
-(void)launchContentViewControllerDidDisappear:(id)arg0 didOpenClip:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif