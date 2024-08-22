// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODELHYPERPARAMETERS_H
#define MODELHYPERPARAMETERS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface ModelHyperparameters : NSObject

@property (nonatomic) NSInteger adaptationStrategy; // ivar: _adaptationStrategy
@property (retain, nonatomic) NSNumber *learningRate; // ivar: _learningRate
@property (retain, nonatomic) NSNumber *minChildWeight; // ivar: _minChildWeight
@property (retain, nonatomic) NSNumber *numTrees; // ivar: _numTrees


-(id)initWithNumTrees:(id)arg0 learningRate:(id)arg1 minChildWeight:(id)arg2 adaptationStrategy:(id)arg3 ;


@end


#endif