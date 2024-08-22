// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOLORCONTROLCLUSTERSTEPCOLORPARAMS_H
#define MTRCOLORCONTROLCLUSTERSTEPCOLORPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterStepColorParams : NSObject

@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *stepX; // ivar: _stepX
@property (retain, nonatomic) NSNumber *stepY; // ivar: _stepY
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif