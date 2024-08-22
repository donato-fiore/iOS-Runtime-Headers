// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDAEMONSYNCDATAENDPOINT_H
#define VCDAEMONSYNCDATAENDPOINT_H

@class NSString, NSMutableSet, NSSet;
@protocol VCSyncDataEndpoint, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCDaemonXPCEventHandler.h"

@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *mutableSyncDataHandlers; // ivar: _mutableSyncDataHandlers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *syncDataHandlers;


-(id)initWithEventHandler:(id)arg0 ;


@end


#endif