// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)_retrieveMetadataForNetworkID:(id)arg0 completion:(id)arg1 ;
-(void)_retrievePreferredThreadNetworkIDWithCompletion:(id)arg0 ;
-(void)retrieveMetadataForNetworkID:(id)arg0 completion:(id)arg1 ;
-(void)retrievePreferredThreadNetworkIDWithCompletion:(id)arg0 ;


@end


#endif