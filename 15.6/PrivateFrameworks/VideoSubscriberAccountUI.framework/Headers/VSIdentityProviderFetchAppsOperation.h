// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSIDENTITYPROVIDERFETCHAPPSOPERATION_H
#define VSIDENTITYPROVIDERFETCHAPPSOPERATION_H

@class VSAsyncOperation, NSString, NSOperationQueue, VSOptional;



@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation

@property (retain, nonatomic) NSString *identityProviderID; // ivar: _identityProviderID
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (nonatomic) BOOL shouldFetchImages; // ivar: _shouldFetchImages
@property (nonatomic) BOOL shouldPrecomposeIcon; // ivar: _shouldPrecomposeIcon


-(id)initWithProviderIdentifier:(id)arg0 andType:(NSUInteger)arg1 ;
-(void)executionDidBegin;


@end


#endif