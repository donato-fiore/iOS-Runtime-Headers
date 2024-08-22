// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPRELATIONSHIPCHANGE_H
#define HKSPRELATIONSHIPCHANGE_H

@protocol HKSPMutableObject, HKSPObject;


#import "HKSPChange.h"

@interface HKSPRelationshipChange : HKSPChange

@property (readonly, nonatomic) NSObject<HKSPMutableObject> *changedValue;
@property (readonly, nonatomic) BOOL isAdd;
@property (readonly, nonatomic) BOOL isRemove;
@property (readonly, nonatomic) BOOL isUpdate;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalValue;


-(id)initWithProperty:(id)arg0 changedObject:(id)arg1 originalObject:(id)arg2 ;


@end


#endif