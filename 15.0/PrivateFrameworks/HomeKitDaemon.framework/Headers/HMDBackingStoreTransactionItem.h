// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORETRANSACTIONITEM_H
#define HMDBACKINGSTORETRANSACTIONITEM_H

@class HMFObject, NSString, NSSet, HMFMessage;
@protocol HMDBackingStoreChangeObject;


#import "HMDBackingStoreModelObject.h"

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>



@property (readonly, nonatomic) HMDBackingStoreModelObject *change; // ivar: _change
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *dependentUUIDs; // ivar: _dependentUUIDs
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFMessage *message; // ivar: _message
@property (readonly) Class superclass;


-(id)initWithChange:(id)arg0 message:(id)arg1 ;


@end


#endif