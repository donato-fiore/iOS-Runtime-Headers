// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSECURITYSTATUSITEM_H
#define HFSECURITYSTATUSITEM_H



#import "HFStatusItem.h"

@interface HFSecurityStatusItem : HFStatusItem



+(BOOL)_currentState:(NSInteger)arg0 matchesTargetState:(NSInteger)arg1 ;
+(id)_shortDescriptionForSecuritySystemState:(NSInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif