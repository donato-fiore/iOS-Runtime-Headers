// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PING_H
#define PING_H

@class NSDictionary, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface Ping : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) CGFloat latency;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property BOOL wasSuccessful; // ivar: _wasSuccessful


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif