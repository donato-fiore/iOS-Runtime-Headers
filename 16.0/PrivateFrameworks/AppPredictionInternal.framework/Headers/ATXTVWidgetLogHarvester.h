// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTVWIDGETLOGHARVESTER_H
#define ATXTVWIDGETLOGHARVESTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXTVWidgetLogHarvester : NSObject {
    NSMutableDictionary *_tvWidgetMetrics;
}




+(id)_stringForWidgetSuggestionEventType:(NSInteger)arg0 ;
-(id)dryRunResult;
-(id)init;
-(id)shouldSuggestTVWidgetWithDefaults:(id)arg0 ;
-(void)generateTVWidgetMetrics;
-(void)sendToCoreAnalytics;


@end


#endif