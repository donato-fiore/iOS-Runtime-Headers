// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKCOMMUTEPLANFIELD_H
#define NPKCOMMUTEPLANFIELD_H

@class PKPaymentPassAction, NSString, NSArray;
@protocol NPKCommutePlanField, NPKDateRange;

#import <Foundation/Foundation.h>


@interface NPKCommutePlanField : NSObject <NPKCommutePlanField>



@property (readonly, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) NSArray *details; // ivar: _details
@property (readonly, nonatomic) NSString *formattedValue; // ivar: _formattedValue
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCountBasedCommutePlan;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NPKDateRange> *usageDateRange; // ivar: _usageDateRange


-(id)initWithLabel:(id)arg0 detailLabel:(id)arg1 formattedValue:(id)arg2 usageDateRange:(id)arg3 identifier:(id)arg4 details:(id)arg5 action:(id)arg6 ;


@end


#endif