// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DDETECTIONRESULTS_H
#define ABPK2DDETECTIONRESULTS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ABPK2DDetectionResult.h"

@interface ABPK2DDetectionResults : NSObject <NSCopying>



@property (retain, nonatomic) ABPK2DDetectionResult *alignedDetectionResult; // ivar: _alignedDetectionResult
@property (copy, nonatomic) NSArray *detectedSkeletons; // ivar: _detectedSkeletons
@property (retain, nonatomic) ABPK2DDetectionResult *rawDetectionResult; // ivar: _rawDetectionResult
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) ABPK2DDetectionResult *trackedDetectionResult; // ivar: _trackedDetectionResult




@end


#endif