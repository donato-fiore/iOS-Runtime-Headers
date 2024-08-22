// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMDBLOCKMANAGER_H
#define HMDCAMDBLOCKMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDCAMDEmbeddedDeviceService.h"

@interface HMDCAMDBlockManager : NSObject {
    NSMutableDictionary *_blockHandlerMap;
    HMDCAMDEmbeddedDeviceService *_service;
    NSObject<OS_dispatch_queue> *_blockQueue;
}




-(NSUInteger)count;
-(id)blockForKey:(id)arg0 ;
-(id)forwardingBlockWithArgumentCount:(NSUInteger)arg0 forKey:(id)arg1 ;
-(id)initWithService:(id)arg0 ;
-(id)keyForBlock:(id)arg0 ;
-(void)addBlock:(id)arg0 forKey:(id)arg1 ;
-(void)addBlockNoCopy:(id)arg0 forKey:(id)arg1 ;
-(void)invokeForwardedBlockWithArguments:(id)arg0 forKey:(id)arg1 ;
-(void)removeBlock:(id)arg0 ;
-(void)removeBlockForKey:(id)arg0 ;


@end


#endif