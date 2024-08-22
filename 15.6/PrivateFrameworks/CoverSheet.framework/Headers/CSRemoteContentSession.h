// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSREMOTECONTENTSESSION_H
#define CSREMOTECONTENTSESSION_H

@class NSString, SBSRemoteContentDefinition;
@protocol CSRemoteContentModalViewControllerDelegate, SBFAuthenticationStatusProvider, CSRemoteContentSessionHostDelegate, CSRemoteContentSessionPreferencesProvider;

#import <Foundation/Foundation.h>

#import "CSRemoteContentModalViewController.h"

@interface CSRemoteContentSession : NSObject <CSRemoteContentModalViewControllerDelegate>

 {
    BOOL _activated;
    BOOL _presented;
    CSRemoteContentModalViewController *_containerViewController;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBSRemoteContentDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSRemoteContentSessionHostDelegate> *hostDelegate; // ivar: _hostDelegate
@property (weak, nonatomic) NSObject<CSRemoteContentSessionPreferencesProvider> *preferencesProvider; // ivar: _preferencesProvider
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(BOOL)_invalidateForReason:(NSInteger)arg0 error:(id)arg1 completion:(id)arg2 ;
-(BOOL)remoteContentModalViewController:(id)arg0 requestsDismissalForType:(NSInteger)arg1 completion:(id)arg2 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 authenticationStatusProvider:(id)arg1 ;
-(void)_activate;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_invalidateWithErrorCode:(NSInteger)arg0 ;
-(void)_reactivate;
-(void)activate;
-(void)remoteContentModalViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)remoteContentModalViewController:(id)arg0 didUpdateWithPreferences:(id)arg1 ;


@end


#endif