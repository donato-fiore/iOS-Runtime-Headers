// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCONFIDENCETHRESHOLDS_H
#define CRCONFIDENCETHRESHOLDS_H


#import <Foundation/Foundation.h>


@interface CRConfidenceThresholds : NSObject

@property (readonly) float highConfidenceThreshold; // ivar: _highConfidenceThreshold
@property (readonly) float mediumConfidenceThreshold; // ivar: _mediumConfidenceThreshold


-(id)initWithMediumThreshold:(float)arg0 highThreshold:(float)arg1 ;


@end


#endif