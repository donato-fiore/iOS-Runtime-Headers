// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMESSAGEFILTERCHAIN_H
#define HMDMESSAGEFILTERCHAIN_H

@class HMFObject, NSMutableArray, NSArray;
@protocol HMFLocking;



@interface HMDMessageFilterChain : HMFObject {
    id<HMFLocking> *_lock;
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