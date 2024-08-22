// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPREFERWIFI_H
#define NRPREFERWIFI_H

@class NSUUID;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NRPreferWiFi : NSObject {
    BOOL _needsReassert;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSUInteger _assertCount;
    NSUUID *_agentUUID;
    NSObject<OS_dispatch_source> *_timer;
}




-(id)init;
-(void)dealloc;


@end


#endif