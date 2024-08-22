// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIADDFUNDSVIEWCONTROLLER_H
#define AMSUIADDFUNDSVIEWCONTROLLER_H

@class ACAccount, AMSProcessInfo, NSDictionary;
@protocol AMSBagProtocol;


#import "AMSUICommonViewController.h"
#import "AMSUIWebViewController.h"

@interface AMSUIAddFundsViewController : AMSUICommonViewController

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (readonly, nonatomic) AMSUIWebViewController *webViewController; // ivar: _webViewController


+(id)createBagForSubProfile;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 clientInfo:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif