// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCOMPUTEDSTATE_H
#define HDCLOUDSYNCCOMPUTEDSTATE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface HDCloudSyncComputedState : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_targets;
}


@property (readonly, copy, nonatomic) NSArray *pullTargets;
@property (readonly, copy, nonatomic) NSArray *pushTargets;
@property (readonly, copy, nonatomic) NSArray *targets;


-(id)detailedDescription;
-(id)init;
-(void)addTargets:(id)arg0 ;
-(void)replaceTargets:(id)arg0 ;


@end


#endif