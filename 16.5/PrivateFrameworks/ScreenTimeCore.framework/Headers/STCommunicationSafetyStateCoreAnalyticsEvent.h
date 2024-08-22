// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCOMMUNICATIONSAFETYSTATECOREANALYTICSEVENT_H
#define STCOMMUNICATIONSAFETYSTATECOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STCommunicationSafetyStateCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly) BOOL communicationSafetyEnabled; // ivar: _communicationSafetyEnabled
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;


-(id)initWithCommunicationSafetyEnabled:(BOOL)arg0 ;


@end


#endif