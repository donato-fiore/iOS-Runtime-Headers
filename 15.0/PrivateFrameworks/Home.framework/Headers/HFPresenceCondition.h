// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPRESENCECONDITION_H
#define HFPRESENCECONDITION_H

@class HMPresenceEvent;


#import "HFCondition.h"

@interface HFPresenceCondition : HFCondition

@property (retain, nonatomic) HMPresenceEvent *presenceEvent; // ivar: _presenceEvent


-(id)hf_naturalLanguageSummaryWithOptions:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithPresenceEvent:(id)arg0 ;


@end


#endif