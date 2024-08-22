// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTDEMOGRAPHICEVENTHANDLER_H
#define MTDEMOGRAPHICEVENTHANDLER_H



#import "MTEventHandler.h"

@interface MTDemographicEventHandler : MTEventHandler



-(BOOL)mtIncludeBaseFields;
-(id)ageDataForUserId:(id)arg0 updateInterval:(CGFloat)arg1 ;
-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)totalYearsSinceDate:(id)arg0 calendar:(id)arg1 ;
-(void)clearUserDefaultsForTopic:(id)arg0 ;


@end


#endif