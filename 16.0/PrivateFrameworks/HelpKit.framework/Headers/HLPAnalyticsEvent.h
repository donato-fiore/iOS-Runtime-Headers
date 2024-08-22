// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPANALYTICSEVENT_H
#define HLPANALYTICSEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HLPAnalyticsEvent : NSObject

@property (readonly) NSDictionary *caRepresentation;
@property (readonly) NSString *eventName;


+(id)event;
-(void)log;


@end


#endif