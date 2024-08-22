// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFIDOUICONTROLLER_H
#define AKFIDOUICONTROLLER_H

@class NSString, AAFXPCSession;
@protocol AAFXPCSessionDelegate, AKFidoInterface;

#import <Foundation/Foundation.h>


@interface AKFidoUIController : NSObject <AAFXPCSessionDelegate, AKFidoInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAFXPCSession *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


-(id)init;
-(id)initWithXPCSession:(id)arg0 ;
-(void)registerFidoKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)verifyFidoKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)verifyFidoKeyWithFidoContext:(id)arg0 completion:(id)arg1 ;
-(void)verifyFidoRecoveryWithContext:(id)arg0 recoveryToken:(id)arg1 completion:(id)arg2 ;


@end


#endif