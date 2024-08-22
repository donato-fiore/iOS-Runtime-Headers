// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EVALUATIONREQUEST_H
#define EVALUATIONREQUEST_H

@class NSData, NSDictionary;


#import "Request.h"

@interface EvaluationRequest : Request

@property (readonly, nonatomic) NSData *acl; // ivar: _acl
@property (readonly, nonatomic) id *aclOperation; // ivar: _aclOperation
@property (readonly, nonatomic) BOOL isApplePay;
@property (readonly, nonatomic) BOOL isInAppPayment;
@property (readonly, nonatomic) BOOL isUnlock;
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic) NSInteger purpose; // ivar: _purpose
@property (nonatomic) BOOL secureIntentRequested; // ivar: _secureIntentRequested


+(BOOL)isApplePayPolicy:(NSInteger)arg0 ;
-(BOOL)interactive;
-(id)initWithAcl:(id)arg0 operation:(id)arg1 options:(id)arg2 ;
-(id)initWithPolicy:(NSInteger)arg0 options:(id)arg1 ;
-(void)updateOptions:(id)arg0 ;


@end


#endif