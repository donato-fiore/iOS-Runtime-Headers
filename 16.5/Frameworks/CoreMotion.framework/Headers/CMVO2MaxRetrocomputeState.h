// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMVO2MAXRETROCOMPUTESTATE_H
#define CMVO2MAXRETROCOMPUTESTATE_H

@class NSDate, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMVO2MaxRetrocomputeState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, retain, nonatomic) NSNumber *meanDelta; // ivar: _meanDelta
@property (readonly, retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 meanDelta:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif