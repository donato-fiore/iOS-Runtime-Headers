// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTOREHANDLER_H
#define HMDBACKINGSTOREHANDLER_H

@class HMFObject, NSString, NSUUID;
@protocol HMDBackingStoreObjectProtocol, HMFLogging;


#import "HMDBackingStore.h"

@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging>



@property (readonly) HMDBackingStore *backingStore; // ivar: _backingStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)backingStoreObjectsForVersion:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(void)runTransactionWithModel:(id)arg0 options:(id)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)runTransactionWithModel:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)runTransactionWithModels:(id)arg0 options:(id)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)runTransactionWithModels:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif