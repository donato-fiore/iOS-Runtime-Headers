// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTIMEEVENTBUILDERITEM_H
#define HFTIMEEVENTBUILDERITEM_H

@class HFEventBuilder<HFTimeEventBuilder>;


#import "HFEventBuilderItem.h"
#import "HFEventTriggerBuilder.h"

@interface HFTimeEventBuilderItem : HFEventBuilderItem

@property (retain, nonatomic) HFEventTriggerBuilder *containingTriggerBuilder; // ivar: _containingTriggerBuilder
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *timeEventBuilder;


-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif