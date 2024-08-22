// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMESSAGEFILTERCHAIN_H
#define HMDMESSAGEFILTERCHAIN_H

@class HMFObject, NSMutableArray, NSArray;



@interface HMDMessageFilterChain : HMFObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_filters;
}


@property (readonly, copy, nonatomic) NSArray *filters;


-(BOOL)acceptMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldCloudSyncData;
-(id)init;
-(void)addMessageFilter:(id)arg0 ;
-(void)removeMessageFilter:(id)arg0 ;
-(void)resetConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif