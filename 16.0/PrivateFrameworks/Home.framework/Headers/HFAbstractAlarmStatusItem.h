// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFABSTRACTALARMSTATUSITEM_H
#define HFABSTRACTALARMSTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFAbstractAlarmStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)iconDescription;
-(id)statusDescriptionAllNormal;
-(id)statusDescriptionMultipleTriggered:(NSUInteger)arg0 ;
-(id)statusDescriptionOneTriggered;


@end


#endif