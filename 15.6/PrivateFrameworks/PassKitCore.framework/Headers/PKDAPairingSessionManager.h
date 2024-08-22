// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDAPAIRINGSESSIONMANAGER_H
#define PKDAPAIRINGSESSIONMANAGER_H

@class NSString, NSMutableArray;
@protocol PKAppletSubcredentialPairingSessionDelegate;


#import "PKDASessionManager.h"

@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *prewarmCompletion; // ivar: _prewarmCompletion
@property (readonly, nonatomic) NSMutableArray *probingCompletionBlocks; // ivar: _probingCompletionBlocks
@property (nonatomic, getter=isProbingTerminalPairingStatus) BOOL probingTerminalPairingStatus; // ivar: _probingTerminalPairingStatus
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 sessionCreationBlock:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithError:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithSubcredential:(id)arg1 registrationData:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishPreWarmWithResult:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishProbingTerminalWithResult:(BOOL)arg1 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg0 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg0 withError:(id)arg1 ;


@end


#endif