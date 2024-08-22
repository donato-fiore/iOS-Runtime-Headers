// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUKALMANCONFIGURATION_H
#define CUKALMANCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CUKalmanConfiguration : NSObject

@property (readonly, nonatomic) CGFloat paramA; // ivar: _paramA
@property (readonly, nonatomic) CGFloat paramB; // ivar: _paramB
@property (readonly, nonatomic) CGFloat paramC; // ivar: _paramC
@property (readonly, nonatomic) CGFloat paramQ; // ivar: _paramQ
@property (readonly, nonatomic) CGFloat paramR; // ivar: _paramR


+(id)bluetoothRSSIConfiguration;
+(id)defaultConfiguration;
-(id)initWithParamR:(CGFloat)arg0 paramQ:(CGFloat)arg1 paramA:(CGFloat)arg2 paramB:(CGFloat)arg3 paramC:(CGFloat)arg4 ;


@end


#endif