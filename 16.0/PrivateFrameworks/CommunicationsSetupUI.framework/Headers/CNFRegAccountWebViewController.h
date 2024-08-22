// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGACCOUNTWEBVIEWCONTROLLER_H
#define CNFREGACCOUNTWEBVIEWCONTROLLER_H

@class NSTimer;


#import "CNFRegServerWebViewController.h"

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {
    BOOL _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}


@property (nonatomic) BOOL failedBagLoad; // ivar: _failedBagLoad


-(BOOL)_loadURLFromBag;
-(BOOL)canSendURLRequest:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg0 ;
-(id)_nonModalParentController;
-(id)_viewPortForFormSheetPresentation;
-(id)_viewPortForNormalPresentation;
-(id)_viewPortStringForSize:(struct CGSize )arg0 ;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(id)bagKey;
-(id)clientInfoHeaderValue;
-(id)initWithRegController:(id)arg0 ;
-(id)interfaceLayoutHeaderValue;
-(id)logName;
-(id)pushTokenHeaderValue;
-(id)securityHeaderValue;
-(id)serviceHeaderValue;
-(id)viewPortHeaderValue;
-(void)_bagLoadTimeout:(id)arg0 ;
-(void)_handleFTServerBagFinishedLoading;
-(void)_reload;
-(void)_reloadDelayed;
-(void)_showGenericErrorWithHandler;
-(void)_showURLDidNotLoadAlert;
-(void)_startBagLoadTimer;
-(void)_startListeningForBagLoad;
-(void)_stopBagLoadTimer;
-(void)_stopCurrentReload;
-(void)_stopListeningForBagLoad;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;
-(void)doHandoffWithStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)loadView;
-(void)receivedStatus:(int)arg0 appleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)setHeadersForRequest:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif