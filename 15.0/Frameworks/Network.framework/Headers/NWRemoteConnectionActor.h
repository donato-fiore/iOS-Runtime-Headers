// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWREMOTECONNECTIONACTOR_H
#define NWREMOTECONNECTIONACTOR_H

@class NSMutableDictionary;
@protocol NWRemoteConnectionActorDelegate;

#import <Foundation/Foundation.h>


@interface NWRemoteConnectionActor : NSObject

@property (retain) NSMutableDictionary *browsers; // ivar: _browsers
@property (retain) NSMutableDictionary *connections; // ivar: _connections
@property (weak) NSObject<NWRemoteConnectionActorDelegate> *delegate; // ivar: _delegate


-(BOOL)receiveRemoteCommand:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scheduleReadsOnConnection:(id)arg0 ;
-(void)sendData:(id)arg0 forConnection:(id)arg1 ;
-(void)updateEndpointsForBrowser:(id)arg0 ;
-(void)updatePathForConnection:(id)arg0 ;


@end


#endif