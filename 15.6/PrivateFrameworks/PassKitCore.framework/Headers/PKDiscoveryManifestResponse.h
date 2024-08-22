// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYMANIFESTRESPONSE_H
#define PKDISCOVERYMANIFESTRESPONSE_H



#import "PKDiscoveryWebServiceResponse.h"
#import "PKDiscoveryManifest.h"

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse

@property (readonly, nonatomic) PKDiscoveryManifest *manifest; // ivar: _manifest


-(id)initWithData:(id)arg0 ;
-(id)initWithManifest:(id)arg0 ;


@end


#endif