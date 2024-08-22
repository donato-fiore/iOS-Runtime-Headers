// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAMENSTRUALALGORITHMSWRISTTEMPERATURE_H
#define HAMENSTRUALALGORITHMSWRISTTEMPERATURE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsWristTemperature : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat temperatureCelsius; // ivar: _temperatureCelsius
@property (readonly, nonatomic) NSString *watchIdentifier; // ivar: _watchIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemperature:(CGFloat)arg0 forWatchIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif