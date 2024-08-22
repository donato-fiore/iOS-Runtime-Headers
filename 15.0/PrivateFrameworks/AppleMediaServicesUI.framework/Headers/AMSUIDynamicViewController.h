// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIDYNAMICVIEWCONTROLLER_H
#define AMSUIDYNAMICVIEWCONTROLLER_H

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;
@protocol AMSUIDynamicViewControllerDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSUICommonViewController.h"
#import "AMSUIDynamicViewControllerDelegateProxy.h"
#import "AMSUIDynamicViewController.h"

@interface AMSUIDynamicViewController : AMSUICommonViewController <AMSUIDynamicViewControllerDelegate, AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL anonymousMetrics;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *clientOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIDynamicViewControllerDelegate> *delegate;
@property (readonly, nonatomic) AMSUIDynamicViewControllerDelegateProxy *delegateProxy; // ivar: _delegateProxy
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSUIDynamicViewController *dynamicViewController; // ivar: _dynamicViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *internalClientOptions;
@property (retain, nonatomic) NSString *mediaClientIdentifier;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)isBeingDismissed;
-(BOOL)isMovingFromParentViewController;
-(id)initWithBag:(id)arg0 URL:(id)arg1 ;
-(id)initWithBag:(id)arg0 bagValue:(id)arg1 ;
-(id)initWithBag:(id)arg0 javaScriptBagValue:(id)arg1 ;
-(id)initWithBag:(id)arg0 javaScriptURL:(id)arg1 ;
-(id)navigationItem;
-(id)title;
-(void)_setup;
-(void)_setupContentSize;
-(void)reloadContentViewImpressionItems;
-(void)setTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif