// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPANALYTICSEVENTCONTENTVIEWED_H
#define HLPANALYTICSEVENTCONTENTVIEWED_H

@class NSString;


#import "HLPAnalyticsEvent.h"

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent

@property (retain, nonatomic) NSString *externalURLString; // ivar: _externalURLString
@property (retain, nonatomic) NSString *fromTopicID; // ivar: _fromTopicID
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *topicID; // ivar: _topicID
@property (retain, nonatomic) NSString *topicTitle; // ivar: _topicTitle
@property (retain, nonatomic) NSString *viewMode; // ivar: _viewMode
@property (nonatomic) NSUInteger viewNum; // ivar: _viewNum


+(id)eventWithTopicID:(id)arg0 topicTitle:(id)arg1 source:(id)arg2 interfaceStyle:(NSInteger)arg3 ;
-(id)_initWithTopicID:(id)arg0 topicTitle:(id)arg1 source:(id)arg2 interfaceStyle:(NSInteger)arg3 ;
-(id)caRepresentation;
-(id)eventName;
-(void)log;


@end


#endif