// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NGMKEYVALIDATOR_H
#define NGMKEYVALIDATOR_H


#import <Foundation/Foundation.h>


@interface NGMKeyValidator : NSObject



+(BOOL)isValidKeyValidator:(id)arg0 receiversIdentity:(id)arg1 sendersIdentity:(id)arg2 error:(*id)arg3 ;
+(NSUInteger)validatorLength;
+(id)keyValidatorWithReceiversIdentity:(id)arg0 sendersIdentity:(id)arg1 ;
+(id)versionByte;
+(struct _NSRange )rangeOnPublicKey;


@end


#endif