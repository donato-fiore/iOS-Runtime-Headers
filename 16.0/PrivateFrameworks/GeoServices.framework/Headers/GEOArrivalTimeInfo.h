// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOARRIVALTIMEINFO_H
#define GEOARRIVALTIMEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOArrivalTimeInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (nonatomic) CGFloat remainingTime; // ivar: _remainingTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegIndex:(NSUInteger)arg0 remainingTime:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif