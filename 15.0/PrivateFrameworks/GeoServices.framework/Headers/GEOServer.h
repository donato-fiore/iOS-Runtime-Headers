// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSERVER_H
#define GEOSERVER_H


#import <Foundation/Foundation.h>

#import "GEODaemon.h"

@interface GEOServer : NSObject

@property (weak, nonatomic) GEODaemon *daemon; // ivar: _daemon


+(Class)peerClass;
+(NSUInteger)launchMode;
+(id)identifier;
-(BOOL)handleIncomingMessage:(id)arg0 withObject:(id)arg1 fromPeer:(id)arg2 ;
-(id)description;
-(void)peerDidConnect:(id)arg0 ;
-(void)peerDidDisconnect:(id)arg0 ;


@end


#endif