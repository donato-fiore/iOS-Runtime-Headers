// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23SIRIINVOCATIONANALYTICS35SIRIINVOCATIONANALYTICSPLUGINRESULT_H
#define _TTC23SIRIINVOCATIONANALYTICS35SIRIINVOCATIONANALYTICSPLUGINRESULT_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface _TtC23SiriInvocationAnalytics35SiriInvocationAnalyticsPluginResult : NSObject {
    ? bookmarkName;
    ? conversationIds;
    ? vtEventIds;
    ? vtEventSummaries;
}


@property (nonatomic, copy) NSString *bookmarkName;
@property (nonatomic) BOOL bookmarkSaved; // ivar: bookmarkSaved
@property (nonatomic, copy) NSArray *conversationIds;
@property (nonatomic) NSInteger numFeaturizedConversations; // ivar: numFeaturizedConversations
@property (nonatomic) NSInteger numFeaturizedVoiceTriggerEvents; // ivar: numFeaturizedVoiceTriggerEvents
@property (nonatomic, copy) NSArray *vtEventIds;
@property (nonatomic, copy) NSDictionary *vtEventSummaries;


+(id)numConversationsKey;
+(id)numVTEventsKey;
-(id)init;


@end


#endif