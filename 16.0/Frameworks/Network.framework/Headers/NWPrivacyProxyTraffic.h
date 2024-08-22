// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPRIVACYPROXYTRAFFIC_H
#define NWPRIVACYPROXYTRAFFIC_H


#import <Foundation/Foundation.h>


@interface NWPrivacyProxyTraffic : NSObject

@property (nonatomic) BOOL anyAppTrackers; // ivar: _anyAppTrackers
@property (nonatomic) BOOL anyDNS; // ivar: _anyDNS
@property (nonatomic) BOOL anyKnownTrackers; // ivar: _anyKnownTrackers
@property (nonatomic) BOOL anyUnencrypted; // ivar: _anyUnencrypted
@property (nonatomic) BOOL mailTrackers; // ivar: _mailTrackers
@property (nonatomic) BOOL newsURLResolution; // ivar: _newsURLResolution
@property (nonatomic) BOOL safariAll; // ivar: _safariAll
@property (nonatomic) BOOL safariDNS; // ivar: _safariDNS
@property (nonatomic) BOOL safariHTTP; // ivar: _safariHTTP
@property (nonatomic) BOOL safariTrackers; // ivar: _safariTrackers
@property (nonatomic) BOOL safariUnencrypted; // ivar: _safariUnencrypted


-(id)description;


@end


#endif