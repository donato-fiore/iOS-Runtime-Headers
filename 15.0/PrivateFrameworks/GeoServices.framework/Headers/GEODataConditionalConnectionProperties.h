// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATACONDITIONALCONNECTIONPROPERTIES_H
#define GEODATACONDITIONALCONNECTIONPROPERTIES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat timeWindowDuration; // ivar: _timeWindowDuration
@property (readonly, nonatomic) CGFloat timeWindowStartTime; // ivar: _timeWindowStartTime
@property (readonly, nonatomic) NSUInteger workLoad; // ivar: _workLoad


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkload:(NSUInteger)arg0 timeWindowDuration:(CGFloat)arg1 ;
-(id)initWithWorkload:(NSUInteger)arg0 timeWindowStartTime:(CGFloat)arg1 timeWindowDuration:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif