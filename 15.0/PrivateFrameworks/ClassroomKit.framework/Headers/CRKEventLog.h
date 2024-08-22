// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKEVENTLOG_H
#define CRKEVENTLOG_H

@class NSSet, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKEventLog : NSObject <NSSecureCoding>

 {
    NSSet *mLazilyLoadedEvents;
}


@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSSet *events;
@property (copy, nonatomic) NSSet *passedInEventDatas; // ivar: _passedInEventDatas
@property (copy, nonatomic) NSSet *passedInEvents; // ivar: _passedInEvents
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeline:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 eventDatas:(id)arg2 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 events:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif