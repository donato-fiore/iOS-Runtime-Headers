// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOCOVERAGECENTRALVIEWCONTROLLER_H
#define NDOCOVERAGECENTRALVIEWCONTROLLER_H

@class PSListController, UIContentUnavailableConfiguration, NSMutableArray, NSString, NDODevice, NSMutableDictionary, NDOManager;
@protocol NDOAppleCareAMSUIViewPresenterProtocol, OS_dispatch_queue, OS_dispatch_group;


#import "NDOACController.h"
#import "NDOAppleCareAMSUIViewController.h"

@interface NDOCoverageCentralViewController : PSListController <NDOAppleCareAMSUIViewPresenterProtocol>

 {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
    UIContentUnavailableConfiguration *_loadingConfig;
}


@property (weak, nonatomic) NDOACController *acController; // ivar: _acController
@property (retain, nonatomic) NSMutableArray *allDevices; // ivar: _allDevices
@property (retain, nonatomic) NDOAppleCareAMSUIViewController *amsUIVC; // ivar: _amsUIVC
@property (retain) NSString *deeplinkParams; // ivar: _deeplinkParams
@property (retain, nonatomic) NDODevice *defaultDevice; // ivar: _defaultDevice
@property (retain) NSMutableDictionary *deviceInfoDict; // ivar: _deviceInfoDict
@property (retain) NSMutableDictionary *deviceSequenceDict; // ivar: _deviceSequenceDict
@property BOOL isFromDeeplink; // ivar: _isFromDeeplink
@property BOOL isSignedIn; // ivar: _isSignedIn
@property (retain, nonatomic) NDOManager *ndoManager; // ivar: _ndoManager
@property BOOL openDefaultDeviceDetails; // ivar: _openDefaultDeviceDetails
@property (retain, nonatomic) NSMutableArray *pairedDevices; // ivar: _pairedDevices


-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(id)_errorStateConfig;
-(id)_getDevicePayloadWithParams:(id)arg0 ;
-(id)_getParamsDictFromPath:(id)arg0 ;
-(id)_getUpdatedParamsFromPath:(id)arg0 ;
-(id)_noAccountConfig;
-(id)specifiers;
-(id)updateCells;
-(void)_refresh:(id)arg0 ;
-(void)addFooterLabelToSpecifier:(id)arg0 ;
-(void)amsUIViewFinishedWithCompletion:(NSUInteger)arg0 ;
-(void)amsUIViewFinishedWithCompletion:(NSUInteger)arg0 params:(id)arg1 ;
-(void)completeWithStatus:(NSUInteger)arg0 ;
-(void)completeWithStatus:(NSUInteger)arg0 params:(id)arg1 ;
-(void)fetchAllDeviceInfoUsingPolicy:(NSUInteger)arg0 params:(id)arg1 isSales:(BOOL)arg2 withReply:(id)arg3 ;
-(void)fetchAllDevices;
-(void)footerTapped:(id)arg0 ;
-(void)getAllDeviceInfoUsingPolicy:(NSUInteger)arg0 params:(id)arg1 isSales:(BOOL)arg2 withReply:(id)arg3 ;
-(void)getDeviceInfoForSerialNumber:(id)arg0 usingPolicy:(NSUInteger)arg1 params:(id)arg2 withReply:(id)arg3 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadView;
-(void)openAMSUIWithHTTPBody:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)resetAll;
-(void)showUI;
-(void)updateDefaultDeviceWithDeviceInfo:(id)arg0 ;
-(void)updateDeviceInfoForDevice:(id)arg0 usingPolicy:(NSUInteger)arg1 params:(id)arg2 forceUpdateFollowup:(BOOL)arg3 withReply:(id)arg4 ;
-(void)viewDidLoad;


@end


#endif