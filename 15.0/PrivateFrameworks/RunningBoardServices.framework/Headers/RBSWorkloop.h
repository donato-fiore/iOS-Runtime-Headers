// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSWORKLOOP_H
#define RBSWORKLOOP_H

@protocol OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface RBSWorkloop : NSObject {
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;
}




+(id)createBackgroundQueue:(id)arg0 ;
+(id)createSyncingQueue:(id)arg0 ;
+(id)sharedBackgroundWorkloop;
+(void)performBackgroundWork:(id)arg0 ;
+(void)performBackgroundWorkWithServiceClass:(unsigned int)arg0 block:(id)arg1 ;


@end


#endif