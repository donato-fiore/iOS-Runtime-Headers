// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARSERVICEVIEWCONTROLLER_H
#define SIDECARSERVICEVIEWCONTROLLER_H

@class UIViewController, SidecarRequest, NSString;
@protocol SidecarServiceServiceInterface, SidecarServiceProviderDelegate, SidecarServiceHostInterface;



@interface SidecarServiceViewController : UIViewController <SidecarServiceServiceInterface, SidecarServiceProviderDelegate>

 {
    BOOL _terminationRequested;
    BOOL _calledServiceReady;
    SidecarRequest *_request;
}


@property (nonatomic) BOOL allowsDisplaySleep; // ivar: _allowsDisplaySleep
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) BOOL backgrounded; // ivar: _backgrounded
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<SidecarServiceHostInterface> *hostProxy;
@property (readonly) SidecarRequest *request;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitForReconnect; // ivar: _waitForReconnect
@property (readonly) BOOL waitForServiceReady;
@property (nonatomic) BOOL wantsVolumeButtonEvents; // ivar: _wantsVolumeButtonEvents


+(BOOL)_isSecureForRemoteViewService;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_notifyServiceAndTerminate:(NSInteger)arg0 ;
-(void)completeRequest:(NSInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)receivedItems:(id)arg0 ;
-(void)requestDidFinish:(id)arg0 ;
-(void)requestDidStart:(id)arg0 ;
-(void)serviceReady;
-(void)sidecarRequest:(id)arg0 receivedItems:(id)arg1 ;
-(void)sidecarServiceActive;
-(void)sidecarServiceCancel;
-(void)sidecarServiceProviderHandleRequest:(id)arg0 ;
-(void)sidecarServiceProviderTerminate;
-(void)sidecarServiceSetBackgrounded:(BOOL)arg0 ;
-(void)sidecarServiceUpdateSupportedOrientations;
-(void)sidecarServiceVolumeDownButtonPressed:(BOOL)arg0 ;
-(void)sidecarServiceVolumeUpButtonPressed:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif