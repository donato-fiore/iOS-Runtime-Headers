// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPRESENCECONDITIONITEM_H
#define HFPRESENCECONDITIONITEM_H

@class NSString, HMHome;
@protocol HFConditionItem;


#import "HFItem.h"
#import "HFPresenceCondition.h"

@interface HFPresenceConditionItem : HFItem <HFConditionItem>



@property (retain, nonatomic) HFPresenceCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCondition:(id)arg0 home:(id)arg1 ;


@end


#endif