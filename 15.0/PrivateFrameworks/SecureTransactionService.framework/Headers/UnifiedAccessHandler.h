// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNIFIEDACCESSHANDLER_H
#define UNIFIEDACCESSHANDLER_H

@class NFUnifiedAccessSession, NSString;
@protocol NFUnifiedAccessSessionDelegate;


#import "STSTransactionHandler.h"

@interface UnifiedAccessHandler : STSTransactionHandler <NFUnifiedAccessSessionDelegate>

 {
    NFUnifiedAccessSession *_nfSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activateWithDelegate:(id)arg0 handoffToken:(id)arg1 ;
-(id)setActiveCredential:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;
-(unsigned char)supportedCredentialType;
-(void)tearDownWithCompletion:(id)arg0 ;
-(void)unifiedAccessSession:(id)arg0 didDetectField:(BOOL)arg1 ;
-(void)unifiedAccessSession:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)unifiedAccessSession:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)unifiedAccessSession:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)unifiedAccessSession:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)unifiedAccessSession:(id)arg0 didSelectApplet:(id)arg1 ;
-(void)unifiedAccessSession:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)unifiedAccessSessionDidEndUnexpectedly:(id)arg0 ;


@end


#endif