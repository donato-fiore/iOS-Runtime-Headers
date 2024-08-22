// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTRECOGNIZERRESULTS_H
#define CRTEXTRECOGNIZERRESULTS_H

@class NSArray, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "CRLatticeResults.h"

@interface CRTextRecognizerResults : NSObject

@property (retain, nonatomic) NSArray *codeMaps; // ivar: _codeMaps
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSDictionary *inputOptions; // ivar: _inputOptions
@property (retain, nonatomic) CRLatticeResults *latticeResults; // ivar: _latticeResults
@property (readonly) NSArray *lineFeatures;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSArray *textFeatures; // ivar: _textFeatures




@end


#endif