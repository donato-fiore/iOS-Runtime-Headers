// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOADSITEDISCOVERY_H
#define SOADSITEDISCOVERY_H

@class NSOperationQueue, NSString;

#import <Foundation/Foundation.h>

#import "SODNSSRVQuery.h"

@interface SOADSiteDiscovery : NSObject

@property (retain) SODNSSRVQuery *dns; // ivar: _dns
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSString *realm; // ivar: _realm


-(id)initWithRealm:(id)arg0 ;
-(void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg0 auditTokenData:(id)arg1 requireTLSForLDAP:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)performLDAPPingUsingSite:(id)arg0 bundleIdentifier:(id)arg1 auditTokenData:(id)arg2 requireTLSForLDAP:(BOOL)arg3 inBackground:(BOOL)arg4 completion:(id)arg5 ;
-(void)performNetworkConnectionUsingService:(id)arg0 orHost:(id)arg1 port:(unsigned short)arg2 inBackground:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif