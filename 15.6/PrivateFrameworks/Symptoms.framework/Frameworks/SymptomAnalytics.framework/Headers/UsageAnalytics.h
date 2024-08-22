// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USAGEANALYTICS_H
#define USAGEANALYTICS_H



#import "ObjectAnalytics.h"

@interface UsageAnalytics : ObjectAnalytics



-(id)allUsageMarkersWithTag:(unsigned int)arg0 ;
-(id)allUsageMarkersWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 withCache:(BOOL)arg1 ;
-(id)lastHappenedWithTag:(unsigned int)arg0 ;
-(id)lastHappenedWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 ;
-(id)usageMarkersWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)usageMarkersWithTag:(unsigned int)arg0 fromDate:(id)arg1 untilDate:(id)arg2 ;


@end


#endif