// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERFETCHALLOPERATION_H
#define VSIDENTITYPROVIDERFETCHALLOPERATION_H

@class VSAsyncOperation, NSArray, VSAuditToken, VSDevice, VSOptional, NSOperationQueue;



@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation

@property (copy, nonatomic) NSArray *applicationAccountProviders; // ivar: _applicationAccountProviders
@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) VSDevice *currentDevice; // ivar: _currentDevice
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (retain, nonatomic) NSOperationQueue *subqueue; // ivar: _subqueue


-(id)init;
-(void)executionDidBegin;


@end


#endif