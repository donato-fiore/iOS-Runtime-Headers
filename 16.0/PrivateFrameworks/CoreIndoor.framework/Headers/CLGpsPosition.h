// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLGPSPOSITION_H
#define CLGPSPOSITION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLGpsPosition : NSObject <NSSecureCoding>

 {
    time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>> _expiry;
}


@property ? expiry;
@property (readonly, nonatomic) ? gpsLocation; // ivar: _gpsLocation
@property (readonly, nonatomic) ? gpsLocationPrivate; // ivar: _gpsLocationPrivate


-(BOOL)isStaleFix:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>> )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(struct ? *)arg0 andPrivateLocation:(struct ? *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif