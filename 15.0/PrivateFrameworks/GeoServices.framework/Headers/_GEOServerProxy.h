// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOSERVERPROXY_H
#define _GEOSERVERPROXY_H


#import <Foundation/Foundation.h>

#import "GEOServer.h"

@interface _GEOServerProxy : NSObject

@property (readonly, nonatomic) GEOServer *server; // ivar: _server
@property (readonly, nonatomic) Class serverClass; // ivar: _serverClass


+(id)proxyForClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServerProxy:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)startServerWithDaemon:(id)arg0 ;


@end


#endif