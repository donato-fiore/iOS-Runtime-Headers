// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DPCMANAGER_H
#define DPCMANAGER_H

@class NSXPCConnection;
@protocol DPCWatchPresenceDelegate;

#import <Foundation/Foundation.h>


@interface DPCManager : NSObject {
    NSXPCConnection *_xpcConnection;
}


@property (weak, nonatomic) NSObject<DPCWatchPresenceDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)getCurrentWatchPresenceStatus;
-(void)registerForWatchPresence;
-(void)setNewEvent:(NSUInteger)arg0 ;
-(void)setStreamingMode:(BOOL)arg0 ;
-(void)setWatchNewEvent:(NSUInteger)arg0 ;
-(void)setupWatchPresenceDetection;
-(void)setupXPCConnection;
-(void)startWatchPresenceUpdate;
-(void)stopWatchPresenceUpdate;
-(void)unregisterForWatchPresence;
-(void)updateWatchPresenceStatus;


@end


#endif