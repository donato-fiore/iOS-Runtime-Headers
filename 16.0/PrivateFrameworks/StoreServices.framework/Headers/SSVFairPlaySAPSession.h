// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVFAIRPLAYSAPSESSION_H
#define SSVFAIRPLAYSAPSESSION_H

@class NSData, NSString;
@protocol SSVSAPContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSBag.h"
#import "SSVFairPlaySAPContext.h"
#import "SSURLBag.h"
#import "SSVURLBagInterpreter.h"

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext>

 {
    SSBag *_bag;
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    NSData *_certificateData;
    SSVFairPlaySAPContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSURLBag *_urlBag;
}


@property (readonly) NSInteger SAPVersion;
@property (copy) NSData *certificateData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL primed; // ivar: _primed
@property (readonly) Class superclass;
@property (readonly, nonatomic) SSVURLBagInterpreter *urlBagInterpreter; // ivar: _urlBagInterpreter
@property (nonatomic) BOOL useSharedBagInterpreter; // ivar: _useSharedBagInterpreter
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)_primeTheConnection;
-(BOOL)_shouldRetrySAPOperationForError:(id)arg0 ;
-(BOOL)_verifyPrimeResponse:(id)arg0 ;
-(BOOL)_verifySignature:(id)arg0 forData:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyData:(id)arg0 withSignature:(id)arg1 error:(*id)arg2 ;
-(id)_establishContext;
-(id)_initSSVFairPlaySAPSession;
-(id)_initWithURLBagInterpreter:(id)arg0 SAPVersion:(NSInteger)arg1 ;
-(id)_loadCertificateData;
-(id)_postExchangeData:(id)arg0 ;
-(id)_signData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSAPVersion:(NSInteger)arg0 ;
-(id)initWithSSBag:(id)arg0 SAPVersion:(NSInteger)arg1 ;
-(id)initWithURLBag:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 SAPVersion:(NSInteger)arg1 ;
-(id)initWithURLBagDictionary:(id)arg0 ;
-(id)initWithURLBagDictionary:(id)arg0 SAPVersion:(NSInteger)arg1 ;
-(id)signatureWithData:(id)arg0 error:(*id)arg1 ;
-(void)establishSessionWithCompletionBlock:(id)arg0 ;
-(void)primeSessionWithCompletionBlock:(id)arg0 ;
-(void)signData:(id)arg0 completionBlock:(id)arg1 ;
-(void)verifySignature:(id)arg0 forData:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif