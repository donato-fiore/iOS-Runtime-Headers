// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSCOREDEVENT_H
#define PPSCOREDEVENT_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPScoredEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 title:(id)arg2 score:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif