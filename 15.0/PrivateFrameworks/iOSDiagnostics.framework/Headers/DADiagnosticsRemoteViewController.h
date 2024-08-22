// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADIAGNOSTICSREMOTEVIEWCONTROLLER_H
#define DADIAGNOSTICSREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol DADiagnosticsRemoteViewControllerInterface, DADiagnosticsRemoteViewControllerDelegate;


#import "DADiagnosticResponder.h"

@interface DADiagnosticsRemoteViewController : UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface>



@property (weak, nonatomic) NSObject<DADiagnosticsRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float originalScreenBrightness; // ivar: _originalScreenBrightness
@property (retain, nonatomic) DADiagnosticResponder *responder; // ivar: _responder


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(id)_stringForReason:(NSUInteger)arg0 ;
-(id)_viewServiceInterface;
-(void)requiredSerialNumbers:(id)arg0 ;
-(void)selectableSerialNumbers:(id)arg0 ;
-(void)sessionToken:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg0 ;
-(void)viewServiceDidFinishWithReason:(NSUInteger)arg0 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif