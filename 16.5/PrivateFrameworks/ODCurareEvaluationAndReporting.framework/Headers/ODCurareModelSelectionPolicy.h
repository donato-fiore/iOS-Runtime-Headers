// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURAREMODELSELECTIONPOLICY_H
#define ODCURAREMODELSELECTIONPOLICY_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface ODCurareModelSelectionPolicy : NSObject

@property (retain, nonatomic) NSNumber *minimumNumberOfEvaluations; // ivar: _minimumNumberOfEvaluations
@property (retain, nonatomic) NSNumber *minimumNumberOfSamples; // ivar: _minimumNumberOfSamples
@property (retain, nonatomic) NSArray *modelSelectionParameters; // ivar: _modelSelectionParameters


-(id)description;
-(id)initWithModelSelectionParameters:(id)arg0 minimumNumberOfEvaluations:(id)arg1 minimumNumberOfSamples:(id)arg2 ;


@end


#endif