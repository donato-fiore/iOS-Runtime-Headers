// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSECURITYSTATUSITEM_H
#define HFSECURITYSTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFSecurityStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(BOOL)_currentState:(NSInteger)arg0 matchesTargetState:(NSInteger)arg1 ;
+(id)_legacy_shortDescriptionForSecuritySystemState:(NSInteger)arg0 ;
+(id)_shortDescriptionForSecuritySystemState:(NSInteger)arg0 ;
+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;


@end


#endif