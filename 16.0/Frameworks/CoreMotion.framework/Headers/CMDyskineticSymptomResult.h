// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDYSKINETICSYMPTOMRESULT_H
#define CMDYSKINETICSYMPTOMRESULT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) float percentLikely; // ivar: _percentLikely
@property (readonly, nonatomic) float percentUnlikely; // ivar: _percentUnlikely
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParkinsonsResult:(struct ParkinsonsResult *)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 percentDyskinesiaUnlikely:(float)arg2 percentDyskinesiaLikely:(float)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif