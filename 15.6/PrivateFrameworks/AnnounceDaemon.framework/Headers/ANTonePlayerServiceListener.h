// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANTONEPLAYERSERVICELISTENER_H
#define ANTONEPLAYERSERVICELISTENER_H

@class NSString, NSXPCListener;
@protocol ANTonePlayerServiceInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "ANTonePlayer.h"

@interface ANTonePlayerServiceListener : NSObject <ANTonePlayerServiceInterface, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) ANTonePlayer *player; // ivar: _player
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_fileURLForTone:(NSUInteger)arg0 ;
-(id)init;
-(void)cleanForExit;
-(void)playTone:(NSUInteger)arg0 audioSessionID:(unsigned int)arg1 endpointUUID:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif