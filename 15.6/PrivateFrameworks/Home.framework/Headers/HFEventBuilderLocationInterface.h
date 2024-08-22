// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFEVENTBUILDERLOCATIONINTERFACE_H
#define HFEVENTBUILDERLOCATIONINTERFACE_H

@class HFEventBuilder<HFLocationEventBuilder>;


#import "HFEventTriggerBuilderInterface.h"

@interface HFEventBuilderLocationInterface : HFEventTriggerBuilderInterface

@property (readonly, nonatomic) BOOL isCustomLocationTrigger;
@property (readonly, nonatomic) BOOL locationCanBeEdited;
@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder; // ivar: _locationEventBuilder




@end


#endif