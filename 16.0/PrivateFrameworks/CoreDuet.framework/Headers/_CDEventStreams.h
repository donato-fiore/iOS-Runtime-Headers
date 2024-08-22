// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDEVENTSTREAMS_H
#define _CDEVENTSTREAMS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _CDEventStreams : NSObject

@property (readonly, nonatomic) NSDictionary *allEventStreams; // ivar: _allEventStreams
@property (readonly, nonatomic) NSDictionary *allKBEventStreams; // ivar: _allKBEventStreams
@property (nonatomic) BOOL allStreamsLoaded; // ivar: _allStreamsLoaded


+(id)ephemeralitySchedule;
+(id)eventStreamForName:(id)arg0 ;
+(id)eventStreamPropertiesForEventStream:(id)arg0 ;
+(id)eventStreamPropertiesForKBName:(id)arg0 ;
+(id)eventStreamPropertiesForName:(id)arg0 ;
+(id)privacyPolicyForEventStreamName:(id)arg0 ;
+(id)rateLimiterForEventStreamName:(id)arg0 ;
+(id)sharedInstance;
+(void)loadAllEventStreams;
-(id)_eventStreamForName:(id)arg0 orKBName:(id)arg1 ;
-(id)init;


@end


#endif