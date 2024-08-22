// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVHAPTICPLAYERPARAMETERCURVE_H
#define AVHAPTICPLAYERPARAMETERCURVE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding>

 {
    NSArray *_controlPoints;
}


@property (readonly) NSArray *controlPoints;
@property NSUInteger shape; // ivar: _shape
@property CGFloat time; // ivar: _time
@property NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 relativeTime:(CGFloat)arg1 shape:(NSUInteger)arg2 controlPoints:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif