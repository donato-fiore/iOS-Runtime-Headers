// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTRIGGERDURATIONSUMMARYITEM_H
#define HFTRIGGERDURATIONSUMMARYITEM_H



#import "HFItem.h"
#import "HFTriggerBuilder.h"

@interface HFTriggerDurationSummaryItem : HFItem

@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 ;


@end


#endif