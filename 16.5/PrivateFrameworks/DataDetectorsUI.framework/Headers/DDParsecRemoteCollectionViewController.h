// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)loadReportAnIssueImage:(id)arg0 ;
-(void)openParsecURL:(id)arg0 ;
-(void)openTrailerPunchout:(id)arg0 ;
-(void)performClientQueryWithServerAccessPermitted:(BOOL)arg0 localSearchPermitted:(BOOL)arg1 ;
-(void)performClientTextQueryWithTerm:(id)arg0 queryId:(NSUInteger)arg1 sessionId:(id)arg2 userAgent:(id)arg3 reply:(id)arg4 ;
-(void)remoteVCIsReady;
-(void)reportAnIssueWithReportIdentifier:(id)arg0 sfReportData:(id)arg1 ;
-(void)showingErrorView:(BOOL)arg0 ;
-(void)showingFTE:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif