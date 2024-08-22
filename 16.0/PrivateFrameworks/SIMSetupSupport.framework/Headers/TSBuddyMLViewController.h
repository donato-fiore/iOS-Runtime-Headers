// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSBUDDYMLVIEWCONTROLLER_H
#define TSBUDDYMLVIEWCONTROLLER_H

@class NSMutableArray, NSString, CoreTelephonyClient, CTPlan, NSDictionary, RemoteUIController;
@protocol RemoteUIControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSUIViewController.h"

@interface TSBuddyMLViewController : SSUIViewController <RemoteUIControllerDelegate, TSSetupFlowItem>

 {
    NSMutableArray *_objectModels;
    NSString *_idNeedsEncryption;
    CoreTelephonyClient *_coreTelephonyClient;
    NSString *_mcc;
    NSString *_mnc;
    NSString *_gid1;
    NSString *_gid2;
    BOOL _inBuddy;
    BOOL _initialRequest;
}


@property (retain) NSString *buddyMLURL; // ivar: _buddyMLURL
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CTPlan *plan; // ivar: _plan
@property (retain) NSDictionary *postdata; // ivar: _postdata
@property (retain) RemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (readonly) Class superclass;


-(BOOL)_isActionDismissToCancelFlow:(id)arg0 ;
-(id)initWithCTPlan:(id)arg0 inBuddy:(BOOL)arg1 ;
-(id)initWithCTPlan:(id)arg0 websheetURL:(id)arg1 postdata:(id)arg2 ;
-(void)_configureRUIController;
-(void)_handlePlanAddition:(id)arg0 ;
-(void)_requestCipherText:(id)arg0 completion:(id)arg1 ;
-(void)_setUserInPurchaseFlow;
-(void)dealloc;
-(void)prepare:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 didRemoveObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif