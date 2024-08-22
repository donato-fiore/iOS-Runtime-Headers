// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPROACTIVESUGGESTER_H
#define PXPROACTIVESUGGESTER_H


#import <Foundation/Foundation.h>


@interface PXProactiveSuggester : NSObject



+(NSUInteger)_applicableLayoutForTimelineSize:(NSUInteger)arg0 ;
+(id)_clientIDForTimelineSize:(NSUInteger)arg0 ;
+(id)_proactiveSuggestionsFromTimelineEntries:(id)arg0 withClient:(id)arg1 forTimelineSize:(NSUInteger)arg2 ;
+(id)proactiveCriterionForFeaturedPhoto:(id)arg0 ;
+(id)proactiveCriterionForMemory:(id)arg0 ;
+(void)updateProactiveSuggestionsFromTimelineEntries:(id)arg0 forTimelineSize:(NSUInteger)arg1 ;


@end


#endif