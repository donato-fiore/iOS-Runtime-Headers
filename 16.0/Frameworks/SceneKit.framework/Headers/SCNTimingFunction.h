// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNTIMINGFUNCTION_H
#define SCNTIMINGFUNCTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNTimingFunction : NSObject <NSSecureCoding>

 {
    *__C3DTimingFunction _timingFunction;
}




+(BOOL)supportsSecureCoding;
+(id)functionWithCAMediaTimingFunction:(id)arg0 ;
+(id)functionWithTimingMode:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg0 ;
-(struct __C3DTimingFunction *)c3dTimingFunction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif