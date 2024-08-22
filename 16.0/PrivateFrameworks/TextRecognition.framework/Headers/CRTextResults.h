// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTRESULTS_H
#define CRTEXTRESULTS_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "CRTextDetectorResults.h"
#import "CRTextRecognizerResults.h"
#import "CRTextFeature.h"

@interface CRTextResults : NSObject

@property (retain, nonatomic) CRTextDetectorResults *detectorResults; // ivar: _detectorResults
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property NSInteger filteredOutFeatureCount; // ivar: _filteredOutFeatureCount
@property (readonly) NSArray *lineFeatures;
@property (retain, nonatomic) CRTextRecognizerResults *recognizerResults; // ivar: _recognizerResults
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSArray *textFeatures; // ivar: _textFeatures
@property (retain, nonatomic) CRTextFeature *titleTextFeature; // ivar: _titleTextFeature


+(id)linesFromTextFeatures:(id)arg0 ;


@end


#endif