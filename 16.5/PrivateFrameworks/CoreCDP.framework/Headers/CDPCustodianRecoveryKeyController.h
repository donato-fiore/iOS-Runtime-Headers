// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPCUSTODIANRECOVERYKEYCONTROLLER_H
#define CDPCUSTODIANRECOVERYKEYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CDPCustodianRecoveryKeyController : NSObject



-(void)createRecoveryKeyWithContext:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)deleteRecoveryKeyWithContext:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)validateRecoveryKey:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;


@end


#endif