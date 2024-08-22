// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMVIEWCONTROLLER_H
#define SKUIREDEEMVIEWCONTROLLER_H

@class UINavigationController, UIActivityIndicatorView, SUClientInterface, UIViewController, NSString, NSOperationQueue;
@protocol SKUIRedeemViewCameraOverrideDelegate;


#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"

@interface SKUIRedeemViewController : UINavigationController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) BOOL attempsAutomaticRedeem; // ivar: _attempsAutomaticRedeem
@property (weak, nonatomic) NSObject<SKUIRedeemViewCameraOverrideDelegate> *cameraDelegate; // ivar: _cameraDelegate
@property (nonatomic) BOOL cameraRedeemVisible; // ivar: _cameraRedeemVisible
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (retain, nonatomic) UIViewController *embeddedViewController; // ivar: _embeddedViewController
@property (nonatomic) BOOL finishedLoading; // ivar: _finishedLoading
@property (copy, nonatomic) NSString *initialCode; // ivar: _initialCode
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // ivar: _redeemConfiguration
@property (nonatomic) BOOL shouldPerformInitialOperationOnAppear; // ivar: _shouldPerformInitialOperationOnAppear


+(BOOL)redeemRequiresNationalId:(id)arg0 ;
-(id)initWithRedeemCategory:(NSInteger)arg0 ;
-(void)_cancelButtonAction;
-(void)_presentLegacyRedeem;
-(void)_presentModernRedeemWithURL:(id)arg0 ;
-(void)_redeemURLWithCompletion:(id)arg0 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)_setup;
-(void)_setupNavigationItem;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(void)clientInterfaceDidFinishLoading:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif