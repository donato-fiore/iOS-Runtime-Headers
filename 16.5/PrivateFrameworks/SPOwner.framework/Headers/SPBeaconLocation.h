// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPBEACONLOCATION_H
#define SPBEACONLOCATION_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 source:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif