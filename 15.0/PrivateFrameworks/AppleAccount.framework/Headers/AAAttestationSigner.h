// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAATTESTATIONSIGNER_H
#define AAATTESTATIONSIGNER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAAttestationSigner : NSObject {
    NSObject<OS_dispatch_queue> *_attestationQueue;
}




+(id)sharedSigner;
-(id)_attestationWithCertificates:(id)arg0 error:(*id)arg1 ;
-(id)_signatureForData:(id)arg0 withReferenceKey:(struct __SecKey *)arg1 error:(*id)arg2 ;
-(id)init;
-(void)signatureForData:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)signaturesForDatas:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif