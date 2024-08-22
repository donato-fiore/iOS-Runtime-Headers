// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONAVDPEER_H
#define GEONAVDPEER_H

@class NSMutableDictionary, NSXPCConnection;

#import <Foundation/Foundation.h>

#import "GEONavdClientInfo.h"

@interface GEONavdPeer : NSObject {
    NSMutableDictionary *_entitlementCache;
}


@property (readonly, nonatomic) GEONavdClientInfo *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) BOOL expectingUpdates; // ivar: _expectingUpdates


-(BOOL)hasEntitlement:(id)arg0 ;
-(id)description;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)updateConnection:(id)arg0 ;


@end


#endif