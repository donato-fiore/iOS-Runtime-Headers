// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMAGSAFERINGCONFIGURATION_H
#define CSMAGSAFERINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CSMagSafeRingConfiguration : NSObject

@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGPoint ringCenter; // ivar: _ringCenter
@property (nonatomic) CGFloat ringDiameter; // ivar: _ringDiameter
@property (nonatomic) CGFloat splashRingDiameter; // ivar: _splashRingDiameter


+(CGFloat)staticScaleFactor;
+(id)auxiliaryConfiguration;
+(id)defaultConfiguration;
+(id)staticConfiguration;
-(id)initWithRingDiameter:(struct SBFScreenSpecificCGFloatValue )arg0 lineWidth:(struct SBFScreenSpecificCGFloatValue )arg1 splashRingDiamter:(struct SBFScreenSpecificCGFloatValue )arg2 ;


@end


#endif