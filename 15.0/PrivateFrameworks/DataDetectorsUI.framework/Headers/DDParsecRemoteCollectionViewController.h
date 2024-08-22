// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDPARSECREMOTECOLLECTIONVIEWCONTROLLER_H
#define DDPARSECREMOTECOLLECTIONVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol DDParsecHostVCInterface;



@interface DDParsecRemoteCollectionViewController : UIRemoteViewController <DDParsecHostVCInterface>

 {
    BOOL _receivedInteractionDidFinish;
}


@property (weak) NSObject<DDParsecHostVCInterface> *hostSideDelegate; // ivar: _hostSideDelegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;
-(void)getStatusBarHidden:(id)arg0 ;
-(void)interactionEnded;
-(void)interactionEndedWithPunchout:(BOOL)arg0 ;
-(void)openParsecURL:(id)arg0 ;
-(void)openTrailerPunchout:(id)arg0 ;
-(void)performClientQueryWithServerAccessPermitted:(BOOL)arg0 localSearchPermitted:(BOOL)arg1 ;
-(void)remoteVCIsReady;
-(void)showingErrorView:(BOOL)arg0 ;
-(void)showingFTE:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif