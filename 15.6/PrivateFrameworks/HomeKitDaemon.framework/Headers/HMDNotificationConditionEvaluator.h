// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNOTIFICATIONCONDITIONEVALUATOR_H
#define HMDNOTIFICATIONCONDITIONEVALUATOR_H

@class HMFObject, NSSet, NSString;
@protocol HMFLogging;



@interface HMDNotificationConditionEvaluator : HMFObject <HMFLogging>



@property (readonly) NSSet *conditionHandlers; // ivar: _conditionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)conditionsPass:(id)arg0 ;
-(id)initWithConditionHandlers:(id)arg0 ;


@end


#endif