// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODCURAREPERSONALIZATIONPOLICY_H
#define ODCURAREPERSONALIZATIONPOLICY_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface ODCurarePersonalizationPolicy : NSObject

@property (retain, nonatomic) NSArray *hyperparameterSelectionPolicy; // ivar: _hyperparameterSelectionPolicy
@property (retain, nonatomic) NSNumber *minimumNumberOfSamplesForPersonalization; // ivar: _minimumNumberOfSamplesForPersonalization
@property (retain, nonatomic) NSNumber *minimumNumberOfSamplesForPersonalizationSelection; // ivar: _minimumNumberOfSamplesForPersonalizationSelection


-(id)initWithModelSelectionParameters:(id)arg0 minimumNumberOfSamplesForPersonalization:(id)arg1 minimumNumberOfSamplesForPersonalizationSelection:(id)arg2 ;


@end


#endif