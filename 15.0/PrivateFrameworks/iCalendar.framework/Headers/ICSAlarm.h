// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSALARM_H
#define ICSALARM_H

@class NSArray, NSData, NSString;


#import "ICSComponent.h"
#import "ICSDateTimeUTCValue.h"
#import "ICSTrigger.h"
#import "ICSStructuredLocation.h"

@interface ICSAlarm : ICSComponent

@property (retain, nonatomic) ICSDateTimeUTCValue *acknowledged;
@property (nonatomic) int action;
@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain, nonatomic) NSData *bookmark;
@property (retain) NSString *description;
@property (retain, nonatomic) NSString *relatedTo;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (nonatomic) BOOL x_apple_default_alarm;
@property (nonatomic) BOOL x_apple_local_default_alarm;
@property (retain, nonatomic) NSString *x_apple_proximity;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (nonatomic) BOOL x_apple_travel_default_alarm;
@property (retain, nonatomic) NSString *x_wr_alarmuid;


+(id)ICSStringFromAction:(int)arg0 ;
+(id)createNoneAlarm;
+(id)name;
+(id)parseableDocumentFromICS:(id)arg0 ;
+(int)actionFromICSString:(id)arg0 ;
-(BOOL)isNoneAlarm;
-(void)fixAlarm;


@end


#endif