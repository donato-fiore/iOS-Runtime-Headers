// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMTREMORRESULT_H
#define CMTREMORRESULT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) float percentMild; // ivar: _percentMild
@property (readonly, nonatomic) float percentModerate; // ivar: _percentModerate
@property (readonly, nonatomic) float percentNone; // ivar: _percentNone
@property (readonly, nonatomic) float percentSlight; // ivar: _percentSlight
@property (readonly, nonatomic) float percentStrong; // ivar: _percentStrong
@property (readonly, nonatomic) float percentUnknown; // ivar: _percentUnknown
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParkinsonsResult:(struct ParkinsonsResult *)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 percentUnknown:(float)arg2 percentNone:(float)arg3 percentSlight:(float)arg4 percentMild:(float)arg5 percentModerate:(float)arg6 percentStrong:(float)arg7 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif