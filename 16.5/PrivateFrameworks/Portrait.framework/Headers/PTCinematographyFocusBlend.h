// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYFOCUSBLEND_H
#define PTCINEMATOGRAPHYFOCUSBLEND_H


#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"

@interface PTCinematographyFocusBlend : NSObject

@property (readonly, nonatomic) float primaryFocusCoefficient; // ivar: _primaryFocusCoefficient
@property (readonly, nonatomic) PTCinematographyDetection *primaryFocusDetection; // ivar: _primaryFocusDetection
@property (readonly, nonatomic) float secondaryFocusCoefficient; // ivar: _secondaryFocusCoefficient
@property (readonly, nonatomic) PTCinematographyDetection *secondaryFocusDetection; // ivar: _secondaryFocusDetection


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_asCinematographyDictionary;
-(id)_asCoefficientsDictionary;
-(id)_initWithDetections:(id)arg0 cinematographyDictionary:(id)arg1 ;
-(id)_initWithDetections:(id)arg0 coefficients:(id)arg1 ;
-(id)_initWithDetections:(id)arg0 coefficientsDictionary:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFocusedBetweenDetection:(id)arg0 detection:(id)arg1 coefficient:(float)arg2 ;
-(id)initFocusedOnDetection:(id)arg0 ;
-(id)initWithPrimaryDetection:(id)arg0 secondaryDetection:(id)arg1 primaryCoefficient:(float)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setFocusBetweenDetection:(id)arg0 detection:(id)arg1 coefficient:(float)arg2 ;
-(void)_setFocusOnDetection:(id)arg0 ;
-(void)_setFocusOnPrimaryDetection:(id)arg0 secondaryDetection:(id)arg1 primaryCoefficient:(float)arg2 ;


@end


#endif