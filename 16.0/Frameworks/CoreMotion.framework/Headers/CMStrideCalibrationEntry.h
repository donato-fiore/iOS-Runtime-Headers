// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSTRIDECALIBRATIONENTRY_H
#define CMSTRIDECALIBRATIONENTRY_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying>

 {
    CLStrideCalEntry _strideCalStruct;
}


@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic) CGFloat endTime;
@property (readonly, nonatomic) NSInteger gpsSource;
@property (readonly, nonatomic) CGFloat percentGrade;
@property (readonly, nonatomic) CGFloat speed;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly, nonatomic) int steps;


+(BOOL)supportsSecureCoding;
-(CGFloat)kvalue;
-(CGFloat)kvalueTrack;
-(CGFloat)score;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCLStrideCalEntry:(struct CLStrideCalEntry )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)session;
-(unsigned int)pacebin;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif