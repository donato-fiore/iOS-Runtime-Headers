// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESRKESESSION_H
#define SESRKESESSION_H

@class NSString;
@protocol SESRKESessionCallbackInterface, SESRKESessionDelegate;


#import "SESSession.h"

@interface SESRKESession : SESSession <SESRKESessionCallbackInterface>



@property (readonly, nonatomic) NSString *activeKeyIdentifier; // ivar: _activeKeyIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SESRKESessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newInstance;
-(BOOL)isPassiveEntryAvailable:(id)arg0 isAvailable:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)sendPassthroughMessage:(id)arg0 readerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)cancelRKEFunction:(id)arg0 readerIdentifier:(id)arg1 ;
-(id)getVehicleReports:(*id)arg0 ;
-(void)didEndUnexpectedly:(id)arg0 ;
-(void)didInvalidateWithError:(id)arg0 ;
-(void)didReceivePassthroughMessage:(id)arg0 fromVehicle:(id)arg1 ;
-(void)didStartSession:(id)arg0 ;
-(void)sendEvent:(id)arg0 fromVehicle:(id)arg1 ;
-(void)sendRKEFunction:(id)arg0 action:(id)arg1 readerIdentifier:(id)arg2 authorization:(id)arg3 isEnduring:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif