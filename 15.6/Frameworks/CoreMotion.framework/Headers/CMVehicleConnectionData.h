// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMVEHICLECONNECTIONDATA_H
#define CMVEHICLECONNECTIONDATA_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMVehicleConnectionData : NSObject <NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSDate *fEndDate;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 endDate:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif