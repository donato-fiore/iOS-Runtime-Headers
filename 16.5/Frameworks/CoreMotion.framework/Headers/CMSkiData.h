// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSKIDATA_H
#define CMSKIDATA_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSkiData : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    CGFloat fRunDistance;
    CGFloat fRunAvgSpeed;
    CGFloat fRunMaxSpeed;
    CGFloat fRunSlope;
    CGFloat fRunElevationDescent;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUInteger recordId;
@property (readonly, nonatomic) CGFloat runAvgSpeed;
@property (readonly, nonatomic) CGFloat runDistance;
@property (readonly, nonatomic) CGFloat runElevationDescent;
@property (readonly, nonatomic) CGFloat runMaxSpeed;
@property (readonly, nonatomic) CGFloat runSlope;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(NSUInteger)arg0 sourceId:(id)arg1 sessionId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 runDistance:(CGFloat)arg5 runAvgSpeed:(CGFloat)arg6 runMaxSpeed:(CGFloat)arg7 runSlope:(CGFloat)arg8 runElevationDescent:(CGFloat)arg9 ;
-(id)initWithSessionId:(id)arg0 ;
-(id)initWithSkiEntry:(struct CLSkiEntry *)arg0 ;
-(void)convertToSkiEntry:(struct CLSkiEntry *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif