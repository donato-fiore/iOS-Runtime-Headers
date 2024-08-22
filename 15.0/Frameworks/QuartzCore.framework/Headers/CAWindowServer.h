// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAWINDOWSERVER_H
#define CAWINDOWSERVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CAWindowServer : NSObject {
    *CAWindowServerImpl _impl;
}


@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled; // ivar: _mirroringEnabled
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id *slotDeletionCallback;


+(id)context;
+(id)contextWithOptions:(id)arg0 ;
+(id)server;
+(id)serverIfRunning;
+(id)serverWithOptions:(id)arg0 ;
+(void)stopServer;
-(BOOL)isSlotValid:(unsigned int)arg0 ;
-(id)_init;
-(id)description;
-(id)displayWithDisplayId:(unsigned int)arg0 ;
-(id)displayWithName:(id)arg0 ;
-(id)displayWithUniqueId:(id)arg0 ;
-(id)init;
-(id)insecureProcessIds;
-(id)secureModeViolations;
-(unsigned int)clientPortOfContextId:(unsigned int)arg0 ;
-(unsigned int)contextIdHostingContextId:(unsigned int)arg0 ;
-(unsigned int)taskNamePortOfContextId:(unsigned int)arg0 ;
-(void)_detectDisplays;
-(void)addDisplay:(id)arg0 ;
-(void)dealloc;
-(void)removeAllDisplays;
-(void)removeDisplay:(id)arg0 ;


@end


#endif