// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSFEEDBACKMETRICSEVENT_H
#define PSFEEDBACKMETRICSEVENT_H


#import <Foundation/Foundation.h>

#import "_PSFeedbackMetricsEventInternal.h"

@interface PSFeedbackMetricsEvent : NSObject

@property (readonly) _PSFeedbackMetricsEventInternal *underlyingObject; // ivar: _underlyingObject


-(id)initWithId:(id)arg0 type:(NSInteger)arg1 engagedSuggestionId:(id)arg2 airdropOptionPresent:(BOOL)arg3 visiblePeopleSuggestionCount:(unsigned char)arg4 visibleAppSuggestionCount:(unsigned char)arg5 ;


@end


#endif