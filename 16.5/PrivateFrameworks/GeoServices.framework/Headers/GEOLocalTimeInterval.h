// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOCALTIMEINTERVAL_H
#define GEOLOCALTIMEINTERVAL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOLocalTimeInterval : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalTimeRange:(struct GEOPDLocalTimeRange *)arg0 ;
-(id)initWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif