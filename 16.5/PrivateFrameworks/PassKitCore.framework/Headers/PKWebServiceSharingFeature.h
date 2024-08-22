// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICESHARINGFEATURE_H
#define PKWEBSERVICESHARINGFEATURE_H

@class NSArray, NSDictionary, NSString, NSURL;


#import "PKWebServiceRegionFeature.h"

@interface PKWebServiceSharingFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) NSArray *activationCodeConfigurations; // ivar: _activationCodeConfigurations
@property (readonly, nonatomic) NSArray *allowedRelayServerHosts; // ivar: _allowedRelayServerHosts
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSDictionary *openGraphPreviewUrls; // ivar: _openGraphPreviewUrls
@property (readonly, nonatomic) NSString *relayServerHost; // ivar: _relayServerHost
@property (readonly, nonatomic) NSArray *relayServerHostsToHandleUniversalLinks; // ivar: _relayServerHostsToHandleUniversalLinks
@property (readonly, nonatomic) NSUInteger relayServerPasswordLength; // ivar: _relayServerPasswordLength
@property (readonly, nonatomic) NSURL *staticContentBaseURL; // ivar: _staticContentBaseURL


-(id)initWithDictionary:(id)arg0 region:(id)arg1 ;


@end


#endif