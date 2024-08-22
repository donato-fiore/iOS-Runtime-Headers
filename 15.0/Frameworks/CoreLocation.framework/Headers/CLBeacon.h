// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLBEACON_H
#define CLBEACON_H

@class NSUUID, NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLBeaconInternal.h"

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>

 {
    CLBeaconInternal *_internal;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) CGFloat accuracy;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;
@property (readonly, nonatomic) NSInteger proximity;
@property (readonly, copy, nonatomic) NSUUID *proximityUUID;
@property (readonly, nonatomic) NSInteger rssi;
@property (readonly, copy, nonatomic) NSDate *timestamp;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProximityUUID:(id)arg0 major:(id)arg1 minor:(id)arg2 proximity:(NSInteger)arg3 accuracy:(CGFloat)arg4 rssi:(NSInteger)arg5 ;
-(id)initWithUUID:(id)arg0 major:(id)arg1 minor:(id)arg2 proximity:(NSInteger)arg3 accuracy:(CGFloat)arg4 rssi:(NSInteger)arg5 timestamp:(CGFloat)arg6 ;
-(int)referenceFrame;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReferenceFrame:(int)arg0 ;


@end


#endif