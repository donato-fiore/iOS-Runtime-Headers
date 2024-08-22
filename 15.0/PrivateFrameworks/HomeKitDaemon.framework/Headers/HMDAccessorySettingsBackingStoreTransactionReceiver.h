// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGSBACKINGSTORETRANSACTIONRECEIVER_H
#define HMDACCESSORYSETTINGSBACKINGSTORETRANSACTIONRECEIVER_H

@class HMFObject, NSString;
@protocol HMDBackingStoreObjectProtocol, HMDAccessorySettingsBackingStoreTransactionReceiverDelegate;



@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject <HMDBackingStoreObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif