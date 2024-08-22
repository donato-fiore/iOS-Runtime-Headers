// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUNKNOWNCONDITIONITEM_H
#define HFUNKNOWNCONDITIONITEM_H

@class NSString;
@protocol HFConditionItem;


#import "HFItem.h"
#import "HFCondition.h"

@interface HFUnknownConditionItem : HFItem <HFConditionItem>



@property (readonly, nonatomic) HFCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCondition:(id)arg0 ;


@end


#endif