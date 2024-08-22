// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPHOTOSENSITIVETIMERANGE_H
#define AVPHOTOSENSITIVETIMERANGE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVPhotosensitiveTimeRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSArray *colors;
@property CGFloat risk; // ivar: _risk
@property ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
+(id)timeRangesFromMetadata:(id)arg0 initialDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 risk:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif