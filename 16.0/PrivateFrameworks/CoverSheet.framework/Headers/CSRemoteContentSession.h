// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTECONTENTSESSION_H
#define CSREMOTECONTENTSESSION_H

@class CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol>, NSString, SBSRemoteContentDefinition;
@protocol CSRemoteContentViewControllerDelegate, CSRemoteContentHostDelegate, SBFAuthenticationStatusProvider, CSRemoteContentSessionHostDelegate, CSRemoteContentSessionPreferencesProvider;

#import <Foundation/Foundation.h>

#import "CSRemoteContentHostViewController.h"
#import "CSDashBoardRemoteContentSettings.h"

@interface CSRemoteContentSession : NSObject <CSRemoteContentViewControllerDelegate, CSRemoteContentHostDelegate>

 {
    BOOL _activated;
    BOOL _presented;
    BOOL _waitingForPreferences;
    BOOL _waitingForContentFrame;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (retain, nonatomic) CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol> *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBSRemoteContentDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSRemoteContentSessionHostDelegate> *hostDelegate; // ivar: _hostDelegate
@property (retain, nonatomic) CSRemoteContentHostViewController *hostViewController; // ivar: _hostViewController
@property (weak, nonatomic) NSObject<CSRemoteContentSessionPreferencesProvider> *preferencesProvider; // ivar: _preferencesProvider
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings; // ivar: _remoteContentSettings
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(BOOL)_invalidateForReason:(NSInteger)arg0 error:(id)arg1 completion:(id)arg2 ;
-(BOOL)_remoteContentFrameIsValid:(struct CGRect )arg0 ;
-(BOOL)prefersInlineForPreferences:(id)arg0 ;
-(BOOL)remoteContentViewController:(id)arg0 requestsDismissalForType:(NSInteger)arg1 completion:(id)arg2 ;
-(CGFloat)remoteContentComplicationHeightInset;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)_remoteContentViewControllerForPreferences:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 authenticationStatusProvider:(id)arg1 ;
-(void)_activateHostViewControllerWithPreferences:(id)arg0 ;
-(void)_activateRemoteViewController:(id)arg0 remoteError:(id)arg1 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_invalidateWithErrorCode:(NSInteger)arg0 ;
-(void)_reactivate;
-(void)_requestRemoteViewControllerWithConnectionHandler:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)didChangeRemoteHostContentFrame:(struct CGRect )arg0 ;
-(void)didChangeRemotePreferences:(id)arg0 ;
-(void)forceDisconnect;
-(void)remoteContentHostViewController:(id)arg0 didTerminateWithError:(id)arg1 ;


@end


#endif