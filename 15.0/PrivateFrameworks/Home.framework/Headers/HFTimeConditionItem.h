// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTIMECONDITIONITEM_H
#define HFTIMECONDITIONITEM_H

@class NSString;
@protocol HFConditionItem;


#import "HFItem.h"
#import "HFTimeCondition.h"

@interface HFTimeConditionItem : HFItem <HFConditionItem>



@property (retain, nonatomic) HFTimeCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCondition:(id)arg0 ;
-(id)initWithConditionType:(NSUInteger)arg0 ;
-(id)initWithConditionType:(NSUInteger)arg0 condition:(id)arg1 ;


@end


#endif