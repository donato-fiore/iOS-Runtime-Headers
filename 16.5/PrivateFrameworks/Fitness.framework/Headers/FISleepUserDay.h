// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FISLEEPUSERDAY_H
#define FISLEEPUSERDAY_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FISleepUserDay : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDate *endOfDay; // ivar: _endOfDay
@property (copy, nonatomic) NSDate *startOfDay; // ivar: _startOfDay


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)initEmptySleepUserDay;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartOfDay:(id)arg0 endOfDay:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif