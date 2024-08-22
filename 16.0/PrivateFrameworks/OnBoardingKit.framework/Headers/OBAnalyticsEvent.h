// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBANALYTICSEVENT_H
#define OBANALYTICSEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface OBAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *payload; // ivar: _payload


+(id)eventWithName:(id)arg0 withPayload:(id)arg1 ;
-(id)description;


@end


#endif