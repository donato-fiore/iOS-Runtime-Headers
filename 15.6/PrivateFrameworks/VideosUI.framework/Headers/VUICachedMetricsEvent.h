// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICACHEDMETRICSEVENT_H
#define VUICACHEDMETRICSEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VUICachedMetricsEvent : NSObject

@property (copy, nonatomic) NSDictionary *eventData; // ivar: _eventData
@property (copy, nonatomic) NSString *eventType; // ivar: _eventType


-(id)initWithEventType:(id)arg0 eventData:(id)arg1 ;


@end


#endif