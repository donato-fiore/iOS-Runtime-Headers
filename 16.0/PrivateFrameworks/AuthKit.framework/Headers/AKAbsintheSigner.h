// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKABSINTHESIGNER_H
#define AKABSINTHESIGNER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface AKAbsintheSigner : NSObject {
    *NACContextOpaque_ _context;
    NSDate *_contextCreationDate;
}




+(id)sharedSigner;
-(BOOL)_didSigningContextExpire;
-(id)_sessionInfoFromCertificateData:(id)arg0 ;
-(id)signatureForURLRequest:(id)arg0 ;
-(void)_createSigningContextWithCompletionHandler:(id)arg0 ;
-(void)_destroySigningContext;
-(void)_establishSessionWithInfo:(id)arg0 sessionURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_generateSignatureForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)signatureForURLRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif