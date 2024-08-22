// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYSERVICEEVENT_H
#define WBSHISTORYSERVICEEVENT_H

@class NSString, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger eventID; // ivar: _eventID
@property (readonly, copy, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSDate *time; // ivar: _time
@property (readonly, copy, nonatomic) NSDictionary *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventID:(NSInteger)arg0 type:(id)arg1 time:(id)arg2 value:(id)arg3 ;
-(id)initWithType:(id)arg0 time:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif