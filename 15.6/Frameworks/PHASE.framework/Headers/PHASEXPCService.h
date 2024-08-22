// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEXPCSERVICE_H
#define PHASEXPCSERVICE_H

@class NSXPCInterface, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, PHASEPlatform;

#import <Foundation/Foundation.h>


@interface PHASEXPCService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCInterface *_interface;
    NSXPCListener *_mainListener;
    NSUInteger _connectionUIDGenerator;
    id<PHASEPlatform> *_platform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedInstanceWithPlatform:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)newConnectionUID;
-(id)init;
-(id)initWithXPCListener:(id)arg0 ;
-(void)resumeListener;


@end


#endif