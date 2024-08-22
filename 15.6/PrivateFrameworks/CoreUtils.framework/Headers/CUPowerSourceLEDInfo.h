// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUPOWERSOURCELEDINFO_H
#define CUPOWERSOURCELEDINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CUPowerSourceLEDInfo : NSObject <NSSecureCoding>



@property (nonatomic) int LEDColor; // ivar: _LEDColor
@property (nonatomic) int LEDState; // ivar: _LEDState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif