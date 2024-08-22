// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECSECUREMIMETRUSTEVALUATION_H
#define ECSECUREMIMETRUSTEVALUATION_H

@class NSString, NSError;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) BOOL requiresReevaluationWithNetworkAccess;
@property (readonly, copy, nonatomic) NSString *signerEmailAddress; // ivar: _signerEmailAddress
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__SecTrust trust; // ivar: _trust
@property (readonly, nonatomic) unsigned int trustResult; // ivar: _trustResult


+(id)anchorCertificatesForTesting;
+(id)evaluateTrust:(struct __SecTrust *)arg0 withOptions:(NSUInteger)arg1 signerEmailAddress:(id)arg2 ;
+(id)log;
+(id)reevaluateWithNetworkAccessAllowed:(id)arg0 ;
+(void)setAnchorCertificatesForTesting:(id)arg0 ;
-(id)_initWithTrust:(struct __SecTrust *)arg0 options:(NSUInteger)arg1 signerEmailAddress:(id)arg2 ;
-(void)_evaluate;
-(void)dealloc;


@end


#endif