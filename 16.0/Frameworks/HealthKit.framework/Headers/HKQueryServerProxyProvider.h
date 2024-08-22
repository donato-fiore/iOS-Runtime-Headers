// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUERYSERVERPROXYPROVIDER_H
#define HKQUERYSERVERPROXYPROVIDER_H



#import "HKTaskServerProxyProvider.h"

@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

@property BOOL shouldForceReactivation; // ivar: _shouldForceReactivation


-(id)initWithHealthStore:(id)arg0 query:(id)arg1 configuration:(id)arg2 queryUUID:(id)arg3 ;
// -(void)fetchProxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 endpointHandler:(id)arg2 errorHandler:(unk)arg3  ;


@end


#endif