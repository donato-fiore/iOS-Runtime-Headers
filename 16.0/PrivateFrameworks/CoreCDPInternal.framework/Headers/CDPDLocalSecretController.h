// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDLOCALSECRETCONTROLLER_H
#define CDPDLOCALSECRETCONTROLLER_H

@class CDPContext;
@protocol CDPDCircleDelegate, CDPDSecureBackupDelegate, CDPLocalSecretFollowUpProvider, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPDCircleController.h"
#import "CDPDSecureBackupController.h"

@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>



@property (retain, nonatomic) CDPDCircleController *circleController; // ivar: _circleController
@property (retain, nonatomic) CDPContext *context; // ivar: _context
@property (retain, nonatomic) NSObject<CDPLocalSecretFollowUpProvider> *followUpProvider; // ivar: _followUpProvider
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController; // ivar: _secureBackupController
@property (retain, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider


-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg0 ;
-(id)_cdpStateMachine;
-(id)circlePeerIDForSecureBackupController:(id)arg0 ;
-(id)contextForController:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)secureChannelContextForController:(id)arg0 ;
-(void)_attemptToEscrowPreRecord:(id)arg0 completion:(id)arg1 ;
-(void)_collectLocalSecretWithCompletion:(id)arg0 ;
-(void)_createContextForSecret:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_handleCompletionStatus:(BOOL)arg0 preRecord:(BOOL)arg1 ;
-(void)_localSecretChangedTo:(id)arg0 secretType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_repairWithStateMachine:(id)arg0 completion:(id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg0 completion:(id)arg1 ;
-(void)circleController:(id)arg0 secureBackupRecordsArePresentWithCompletion:(id)arg1 ;
-(void)dealloc;
-(void)finishOfflineLocalSecretChangeWithCompletion:(id)arg0 ;
-(void)localSecretChangedTo:(id)arg0 secretType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(id)arg0 ;
-(void)promptForLocalSecretWithCompletion:(id)arg0 ;


@end


#endif