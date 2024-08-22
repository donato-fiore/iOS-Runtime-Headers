// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYQUEUES_H
#define HMDACCESSORYQUEUES_H

@class HMFObject, NSMutableDictionary;



@interface HMDAccessoryQueues : HMFObject

@property (retain, nonatomic) NSMutableDictionary *queues; // ivar: queues


-(BOOL)_inQueue:(id)arg0 queue:(id)arg1 ;
-(BOOL)createQueue:(id)arg0 ;
-(id)getAccessoryForContext:(id)arg0 fromQueue:(id)arg1 ;
-(id)getContextForAccessory:(id)arg0 ;
-(id)init;
-(id)popAccessoryFromQueue:(id)arg0 ;
-(id)whichQueueForAccessory:(id)arg0 ;
-(int)countForQueue:(id)arg0 ;
-(void)addAccessory:(id)arg0 toQueue:(id)arg1 context:(id)arg2 ;
-(void)enumerateQueue:(id)arg0 enumerateAccessory:(id)arg1 ;
-(void)removeAccessory:(id)arg0 ;


@end


#endif