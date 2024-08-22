// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APSIGNINGAUTHORITY_H
#define APSIGNINGAUTHORITY_H

@class NSString;
@protocol APSigningAuthorizable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APSigningAuthority : NSObject <APSigningAuthorizable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) FairPlayHWInfo_ hwInfo; // ivar: _hwInfo
@property (nonatomic) *FPSAPContextOpaque_ session; // ivar: _session
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // ivar: _setupQueue
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version; // ivar: _version


+(BOOL)_hasEntitlement:(id)arg0 ;
+(BOOL)_validateAllowListingForPoolCreation:(id)arg0 ;
-(BOOL)_initializeFairPlay;
-(BOOL)isValidSignature:(id)arg0 forData:(id)arg1 error:(*id)arg2 ;
-(id)_signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signatureForRawData:(id)arg0 error:(*id)arg1 ;
-(void)_certificateRetrievalDidFinish:(id)arg0 isCachedCertificate:(BOOL)arg1 error:(id)arg2 ;
-(void)_fairPlaySAPExchange:(id)arg0 certificateIsCached:(BOOL)arg1 ;
-(void)_requestCertificate:(BOOL)arg0 ;
-(void)_setupNegotiationStepDidFinish:(id)arg0 certificateIsCached:(BOOL)arg1 error:(id)arg2 ;
-(void)_setupRequestSigning;
-(void)dealloc;


@end


#endif