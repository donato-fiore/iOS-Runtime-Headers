// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASAPPSESSIONENDEVENT_H
#define ICASAPPSESSIONENDEVENT_H

@class NSDictionary;
@protocol AAEventType;

#import <Foundation/Foundation.h>


@interface ICASAppSessionEndEvent : NSObject <AAEventType>



@property (readonly, copy, nonatomic) NSDictionary *eventProperties;


+(NSInteger)timestampGranularity;
+(id)eventName;
+(id)sessionGroup;


@end


#endif