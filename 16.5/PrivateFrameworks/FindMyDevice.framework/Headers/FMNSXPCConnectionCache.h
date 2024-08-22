// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMNSXPCCONNECTIONCACHE_H
#define FMNSXPCCONNECTIONCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMNSXPCConnectionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *connectionsByServiceName; // ivar: _connectionsByServiceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modsSerialQueue; // ivar: _modsSerialQueue


+(id)sharedCache;
-(id)init;
-(id)resumeConnectionWithConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif