// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADIAGNOSTICSREMOTEHOSTVIEWCONTROLLER_H
#define DADIAGNOSTICSREMOTEHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol DADiagnosticsRemoteViewControllerInterface, DADiagnosticsRemoteDelegate;


#import "DADiagnosticResponder.h"

@interface DADiagnosticsRemoteHostViewController : UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface>



@property (weak, nonatomic) NSObject<DADiagnosticsRemoteDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float originalScreenBrightness; // ivar: _originalScreenBrightness
@property (retain, nonatomic) DADiagnosticResponder *responder; // ivar: _responder


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(id)arg0 ;
-(id)_viewServiceInterface;
-(id)disconnect;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg0 ;
-(void)viewServiceDidFinishWithReason:(NSUInteger)arg0 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif