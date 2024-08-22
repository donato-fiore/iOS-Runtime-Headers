// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMESSAGEFILTER_H
#define HMDMESSAGEFILTER_H

@class HMFObject, NSString;
@protocol OS_dispatch_queue;



@interface HMDMessageFilter : HMFObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(BOOL)shouldCloudSyncData;
-(id)initWithName:(id)arg0 ;
-(void)resetConfiguration;


@end


#endif