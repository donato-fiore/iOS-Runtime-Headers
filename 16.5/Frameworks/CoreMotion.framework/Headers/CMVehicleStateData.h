// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMVEHICLESTATEDATA_H
#define CMVEHICLESTATEDATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CMMotionTimeRange.h"

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying>

 {
    CMMotionTimeRange *fTimeRange;
    NSString *fDeviceId;
    NSUInteger fVehicularState;
    NSUInteger fVehicularHints;
}


@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) CMMotionTimeRange *timeRange;
@property (readonly, nonatomic) NSUInteger vehicularHints;
@property (readonly, nonatomic) NSUInteger vehicularState;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeRange:(id)arg0 deviceId:(id)arg1 ;
-(id)initWithTimestamp:(id)arg0 state:(NSUInteger)arg1 hints:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif