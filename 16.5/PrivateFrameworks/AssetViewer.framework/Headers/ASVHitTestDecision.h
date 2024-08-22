// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVHITTESTDECISION_H
#define ASVHITTESTDECISION_H


#import <Foundation/Foundation.h>

#import "ASVHitTestResult.h"
#import "ASVRealHitTestResult.h"

@interface ASVHitTestDecision : NSObject

@property (retain, nonatomic) ASVHitTestResult *finalResult; // ivar: _finalResult
@property (retain, nonatomic) ASVHitTestResult *interpolatedOrFinalResult; // ivar: _interpolatedOrFinalResult
@property (retain, nonatomic) ASVHitTestResult *interpolatedResult; // ivar: _interpolatedResult
@property (retain, nonatomic) ASVRealHitTestResult *originalResult; // ivar: _originalResult


-(id)initWithOriginalResult:(id)arg0 interpolatedResult:(id)arg1 finalResult:(id)arg2 ;


@end


#endif