// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCHANGINGPASSWORDMODEEVENT_H
#define ICASCHANGINGPASSWORDMODEEVENT_H

@class NSDictionary;
@protocol AAEventType;

#import <Foundation/Foundation.h>


@interface ICASChangingPasswordModeEvent : NSObject <AAEventType>



@property (readonly, copy, nonatomic) NSDictionary *eventProperties;


+(NSInteger)timestampGranularity;
+(id)eventName;
+(id)sessionGroup;


@end


#endif