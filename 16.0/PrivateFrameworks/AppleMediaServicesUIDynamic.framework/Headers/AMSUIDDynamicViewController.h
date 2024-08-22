// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIDDYNAMICVIEWCONTROLLER_H
#define AMSUIDDYNAMICVIEWCONTROLLER_H

@class AMSUICommonViewController, ACAccount, AMSProcessInfo, NSDictionary, NSString, UINavigationItem;
@protocol AMSBagProtocol, AMSUIDDynamicViewControllerDelegate;



@interface AMSUIDDynamicViewController : AMSUICommonViewController {
    ? clientOptions;
    ? internalClientOptions;
    ? mediaClientIdentifier;
    ? metricsOverlay;
    ? automaticErrorRetry;
    ? child;
    ? $__lazy_storage_$_childNavigationController;
    ? objectGraph;
    ? preloadingCompletionPromise;
    ? urlPromise;
}


@property (nonatomic, retain) ACAccount *account; // ivar: account
@property (nonatomic) BOOL anonymousMetrics; // ivar: anonymousMetrics
@property (nonatomic, retain) NSObject<AMSBagProtocol> *bag; // ivar: bag
@property (nonatomic, retain) AMSProcessInfo *clientInfo; // ivar: clientInfo
@property (nonatomic, copy) NSDictionary *clientOptions;
@property (nonatomic, weak) NSObject<AMSUIDDynamicViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, copy) NSDictionary *internalClientOptions;
@property (nonatomic, copy) NSString *mediaClientIdentifier;
@property (nonatomic, copy) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *title;


-(id)init;
-(id)initWithBag:(id)arg0 URL:(id)arg1 ;
-(id)initWithBag:(id)arg0 bagValue:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preload;
-(void)cancelButtonAction;
-(void)dealloc;
-(void)didEnterBackground;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)legacyPurchaseDidSucceed:(id)arg0 ;
-(void)loadView;
-(void)reloadContentViewImpressionItems;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willEnterForeground;


@end


#endif