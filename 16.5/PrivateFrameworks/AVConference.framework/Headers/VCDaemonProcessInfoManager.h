// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCDAEMONPROCESSINFOMANAGER_H
#define VCDAEMONPROCESSINFOMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}




+(id)copyProcessInfo;
+(id)sharedManager;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyProcessInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerBlocksForService;
-(void)release;


@end


#endif