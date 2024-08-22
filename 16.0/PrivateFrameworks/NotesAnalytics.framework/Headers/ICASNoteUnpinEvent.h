// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTEUNPINEVENT_H
#define ICASNOTEUNPINEVENT_H

@class NSDictionary;
@protocol AAEventType;

#import <Foundation/Foundation.h>


@interface ICASNoteUnpinEvent : NSObject <AAEventType>



@property (readonly, copy, nonatomic) NSDictionary *eventProperties;


+(NSInteger)timestampGranularity;
+(id)eventName;
+(id)sessionGroup;


@end


#endif