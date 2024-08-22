// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STWEBCONTENTFILTERCOREANALYTICSEVENT_H
#define STWEBCONTENTFILTERCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STWebContentFilterCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) BOOL webContentFilterEnabled; // ivar: _webContentFilterEnabled


-(id)initWithWebContentFilterEnabled:(BOOL)arg0 ;


@end


#endif