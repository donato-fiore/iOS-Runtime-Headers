// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KCSRPSERVERCONTEXT_H
#define KCSRPSERVERCONTEXT_H

@class NSData;


#import "KCSRPContext.h"

@interface KCSRPServerContext : KCSRPContext

@property (readonly) NSData *salt; // ivar: _salt
@property (retain) NSData *verifier; // ivar: _verifier


-(BOOL)resetWithPassword:(id)arg0 error:(*id)arg1 ;
-(id)copyChallengeFor:(id)arg0 error:(*id)arg1 ;
-(id)copyConfirmationFor:(id)arg0 error:(*id)arg1 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 digestInfo:(struct ccdigest_info *)arg2 group:(struct ccdh_gp *)arg3 randomSource:(struct ccrng_state *)arg4 ;
-(id)initWithUser:(id)arg0 salt:(id)arg1 verifier:(id)arg2 digestInfo:(struct ccdigest_info *)arg3 group:(struct ccdh_gp *)arg4 randomSource:(struct ccrng_state *)arg5 ;


@end


#endif