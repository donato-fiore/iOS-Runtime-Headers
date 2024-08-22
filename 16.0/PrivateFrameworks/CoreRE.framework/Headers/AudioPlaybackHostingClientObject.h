// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOPLAYBACKHOSTINGCLIENTOBJECT_H
#define AUDIOPLAYBACKHOSTINGCLIENTOBJECT_H

@class NSXPCConnection, NSString;
@protocol REAudioPlaybackHostingService;

#import <Foundation/Foundation.h>


@interface AudioPlaybackHostingClientObject : NSObject <REAudioPlaybackHostingService>



@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property (readonly) NSUInteger connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 connectionIdentifier:(NSUInteger)arg1 ;
-(void)start;


@end


#endif