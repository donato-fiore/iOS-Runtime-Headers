// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPCLUSTER_H
#define CHIPCLUSTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHIPCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue; // ivar: _chipWorkQueue


-(id)initWithDevice:(id)arg0 endpoint:(unsigned char)arg1 queue:(id)arg2 ;
-(struct ClusterBase *)getCluster;


@end


#endif