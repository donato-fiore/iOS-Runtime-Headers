// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTHREADNETWORKMETADATASTORE_H
#define HMDTHREADNETWORKMETADATASTORE_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDThreadNetworkMetadataStore, OS_dispatch_queue;



@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)defaultStore;
+(id)logCategory;
+(id)new;
-(id)init;
-(id)initInternal;
-(void)_removePreferredNetworkWithCompletion:(id)arg0 ;
-(void)_retrieveMetadataWithCompletion:(id)arg0 ;
-(void)removePreferredNetworkWithCompletion:(id)arg0 ;
-(void)retrieveMetadataWithCompletion:(id)arg0 ;


@end


#endif