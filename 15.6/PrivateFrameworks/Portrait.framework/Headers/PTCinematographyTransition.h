// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYTRANSITION_H
#define PTCINEMATOGRAPHYTRANSITION_H


#import <Foundation/Foundation.h>


@interface PTCinematographyTransition : NSObject

@property (nonatomic) NSUInteger kind; // ivar: _kind


-(float)coefficientForNormalizedTime:(float)arg0 ;
-(float)linearCoefficientForNormalizedTime:(float)arg0 ;
-(id)initWithKind:(NSUInteger)arg0 ;


@end


#endif