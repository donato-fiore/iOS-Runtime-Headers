// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWALRUSDAEMONSERVICE_H
#define CDPWALRUSDAEMONSERVICE_H


#import <Foundation/Foundation.h>

#import "CDPInternalWalrusStateController.h"

@interface CDPWalrusDaemonService : NSObject {
    NSUInteger _entitlements;
}


@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController; // ivar: _walrusStateController


-(BOOL)_allowWalrusAccess;
-(BOOL)_allowWalrusPCSKeysAccess;
-(id)defaultWalrusStateController;
-(id)initWithEntitlements:(NSUInteger)arg0 ;
-(id)initWithEntitlements:(NSUInteger)arg0 walrusController:(id)arg1 ;
-(void)broadcastWalrusStateChange;
-(void)pcsKeysForServices:(id)arg0 completion:(id)arg1 ;
-(void)repairWalrusWithCompletion:(id)arg0 ;
-(void)updateWalrusStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateWebAccessStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)walrusStatusWithContext:(id)arg0 completion:(id)arg1 ;
-(void)webAccessStatusWithCompletion:(id)arg0 ;


@end


#endif