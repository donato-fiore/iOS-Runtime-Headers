// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYANALYTICSEVENT_H
#define BYANALYTICSEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface BYAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *payload; // ivar: _payload
@property (nonatomic) BOOL persist; // ivar: _persist


+(id)eventWithName:(id)arg0 withPayload:(id)arg1 persist:(BOOL)arg2 ;
-(id)description;


@end


#endif