// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOLORCONTROLCLUSTERSTOPMOVESTEPPARAMS_H
#define MTRCOLORCONTROLCLUSTERSTOPMOVESTEPPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterStopMoveStepParams : NSObject

@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif