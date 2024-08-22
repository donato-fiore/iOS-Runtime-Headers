// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFETCHFAMILYCIRCLEREQUEST_H
#define FAFETCHFAMILYCIRCLEREQUEST_H

@class NSArray, NSDictionary;


#import "FAFamilyCircleRequest.h"

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest

@property NSUInteger cachePolicy; // ivar: _cachePolicy
@property BOOL doNotFetchFromServer; // ivar: _doNotFetchFromServer
@property (copy) NSArray *expectedAltDSIDs; // ivar: _expectedAltDSIDs
@property (copy) NSArray *expectedDSIDs; // ivar: _expectedDSIDs
@property BOOL forceServerFetch; // ivar: _forceServerFetch
@property BOOL promptUserToResolveAuthenticatonFailure; // ivar: _promptUserToResolveAuthenticatonFailure
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, retain) NSDictionary *serverResponse; // ivar: _serverResponse
@property BOOL signedInAccountShouldBeApprover; // ivar: _signedInAccountShouldBeApprover


-(id)fetchCachedFamilyCircle:(*id)arg0 ;
-(id)fetchCachedFamilyCircleWithCache:(id)arg0 deviceInfo:(id)arg1 error:(*id)arg2 ;
-(id)fetchFamilyCircleWithError:(*id)arg0 ;
-(id)init;
-(id)requestOptions;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif