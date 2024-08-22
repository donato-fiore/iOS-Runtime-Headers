// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTDETECTORRESULTS_H
#define CRTEXTDETECTORRESULTS_H

@class NSDate, NSDictionary, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRTextDetectorResults : NSObject

@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSDictionary *inputOptions; // ivar: _inputOptions
@property (retain, nonatomic) NSArray *pyramidPostInterScaleNMSTextFeatures; // ivar: _pyramidPostInterScaleNMSTextFeatures
@property (retain, nonatomic) NSArray *pyramidPostIntraScaleNMSTextFeatures; // ivar: _pyramidPostIntraScaleNMSTextFeatures
@property (retain, nonatomic) NSArray *pyramidPreIntraScaleNMSTextFeatures; // ivar: _pyramidPreIntraScaleNMSTextFeatures
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize; // ivar: _pyramidScaleSize
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSArray *textFeatures; // ivar: _textFeatures




@end


#endif