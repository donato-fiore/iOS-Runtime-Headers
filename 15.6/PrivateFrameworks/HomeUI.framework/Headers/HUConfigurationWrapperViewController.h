// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONFIGURATIONWRAPPERVIEWCONTROLLER_H
#define HUCONFIGURATIONWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, NAFuture, UIViewController<HUConfigurationContentViewController>;
@protocol HUPreloadableViewController, HUConfigurationViewController, HUConfigurationContentViewControllerDelegate, HUConfigurationViewControllerDelegate;



@interface HUConfigurationWrapperViewController : UIViewController <HUPreloadableViewController, HUConfigurationViewController, HUConfigurationContentViewControllerDelegate>



@property (retain, nonatomic) UIBarButtonItem *backButtonItem; // ivar: _backButtonItem
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NAFuture *finishFuture; // ivar: _finishFuture
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep; // ivar: _isFinalStep
@property (retain, nonatomic) UIBarButtonItem *nextButtonItem; // ivar: _nextButtonItem
@property (readonly, nonatomic) UIViewController<HUConfigurationContentViewController> *protocolConformingContentViewController;
@property (readonly) Class superclass;


-(BOOL)_canGoNext;
-(id)hu_preloadContent;
-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 configurationDelegate:(id)arg1 ;
-(id)title;
-(void)_backAction:(id)arg0 ;
-(void)_nextAction:(id)arg0 ;
-(void)_updateNextButton;
-(void)contentViewControllerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif