// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRIDENTIFYDEVICE_H
#define HMMTRIDENTIFYDEVICE_H

@class MTRBaseDevice;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMTRDeviceTopology.h"

@interface HMMTRIdentifyDevice : NSObject

@property (retain) MTRBaseDevice *baseDevice; // ivar: _baseDevice
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) HMMTRDeviceTopology *topology; // ivar: _topology


+(id)logCategory;
-(id)initWithBaseDevice:(id)arg0 topology:(id)arg1 queue:(id)arg2 ;
-(void)_childNodesWithIdentifyForEndpoint:(unsigned short)arg0 completionHandler:(id)arg1 ;
-(void)_identifyClusterPresentAtEndpoint:(unsigned short)arg0 completionHandler:(id)arg1 ;
-(void)_issueIdentifyCommand:(unsigned short)arg0 completionHandler:(id)arg1 ;
-(void)_validIdentifyNodeForParentAtEndpoint:(unsigned short)arg0 completionHandler:(id)arg1 ;
-(void)identifyWithEndpoint:(unsigned short)arg0 completionHandler:(id)arg1 ;


@end


#endif