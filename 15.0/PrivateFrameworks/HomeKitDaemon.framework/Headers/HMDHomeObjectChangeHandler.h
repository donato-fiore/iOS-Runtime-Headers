// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEOBJECTCHANGEHANDLER_H
#define HMDHOMEOBJECTCHANGEHANDLER_H

@class HMFObject;
@protocol OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDHomeObjectChangeHandler : HMFObject

@property (readonly, weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithHome:(id)arg0 ;
-(void)handleObjectAdd:(id)arg0 message:(id)arg1 ;
-(void)handleObjectRemove:(id)arg0 message:(id)arg1 ;
-(void)handleObjectUpdate:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif