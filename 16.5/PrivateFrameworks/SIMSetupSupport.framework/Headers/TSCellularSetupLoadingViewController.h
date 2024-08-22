// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARSETUPLOADINGVIEWCONTROLLER_H
#define TSCELLULARSETUPLOADINGVIEWCONTROLLER_H

@class CoreTelephonyClient, NSURL, NSString, NSDictionary;
@protocol SFSafariViewControllerDelegate, UIAdaptivePresentationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSUIViewController.h"
#import "TSCellularSetupLoadingView.h"
#import "TSRemotePlanWebsheetContext.h"

@interface TSCellularSetupLoadingViewController : SSUIViewController <SFSafariViewControllerDelegate, UIAdaptivePresentationControllerDelegate, TSSetupFlowItem>

 {
    CoreTelephonyClient *_coreTelephonyClient;
}


@property (retain, nonatomic) NSURL *carrierURL; // ivar: _carrierURL
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property int flowType; // ivar: _flowType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProcessCanceled; // ivar: _isProcessCanceled
@property (nonatomic) BOOL isRemotePlan; // ivar: _isRemotePlan
@property (retain, nonatomic) TSCellularSetupLoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) NSDictionary *postdata; // ivar: _postdata
@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext; // ivar: _remotePlanWebsheetContext
@property (readonly) Class superclass;
@property (readonly) BOOL useLiveID; // ivar: _useLiveID


-(id)initWithRemotePlanWebsheetContext:(id)arg0 isRemotePlan:(BOOL)arg1 ;
-(id)navBarTitle;
-(void)_showFailureAlert:(id)arg0 completion:(id)arg1 ;
-(void)cancelButtonTapped;
-(void)deactivate;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)safariViewController:(id)arg0 didCompleteInitialLoad:(BOOL)arg1 ;
-(void)safariViewController:(id)arg0 url:(id)arg1 postdata:(id)arg2 completion:(id)arg3 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)setupCoreTelephonyClientForRemoteSignup;
-(void)setupNavigationBarItems;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif