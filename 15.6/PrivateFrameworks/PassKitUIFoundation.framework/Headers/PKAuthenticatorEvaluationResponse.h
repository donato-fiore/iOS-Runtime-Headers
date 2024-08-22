// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUTHENTICATOREVALUATIONRESPONSE_H
#define PKAUTHENTICATOREVALUATIONRESPONSE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface PKAuthenticatorEvaluationResponse : NSObject

@property (readonly, nonatomic) BOOL biometricMatch; // ivar: _biometricMatch
@property (readonly, copy, nonatomic) NSData *credential; // ivar: _credential
@property (copy, nonatomic) NSString *kextBlacklistVersion; // ivar: _kextBlacklistVersion
@property (readonly, nonatomic) NSInteger result; // ivar: _result


+(id)responseWithResult:(NSInteger)arg0 ;
+(id)responseWithResult:(NSInteger)arg0 biometricMatch:(BOOL)arg1 credential:(id)arg2 ;


@end


#endif