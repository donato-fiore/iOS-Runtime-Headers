// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFARRIVELOCATIONTRIGGER_H
#define WFARRIVELOCATIONTRIGGER_H



#import "WFLocationTrigger.h"

@interface WFArriveLocationTrigger : WFLocationTrigger



+(NSInteger)triggerBacking;
+(id)displayGlyph;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;


@end


#endif