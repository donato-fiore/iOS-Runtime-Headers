// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTSECONDPASSLATENCYMETRICS_H
#define CSVTSECONDPASSLATENCYMETRICS_H


#import <Foundation/Foundation.h>


@interface CSVTSecondPassLatencyMetrics : NSObject

@property (nonatomic) NSUInteger secondPassAssetLoadCompleteTimeInNs; // ivar: _secondPassAssetLoadCompleteTimeInNs
@property (nonatomic) NSUInteger secondPassAssetLoadStartTimeInNs; // ivar: _secondPassAssetLoadStartTimeInNs
@property (nonatomic) NSUInteger secondPassAssetQueryCompleteTimeInNs; // ivar: _secondPassAssetQueryCompleteTimeInNs
@property (nonatomic) NSUInteger secondPassAssetQueryStartTimeInNs; // ivar: _secondPassAssetQueryStartTimeInNs
@property (nonatomic) NSUInteger secondPassAudioStreamReadyTimeInNs; // ivar: _secondPassAudioStreamReadyTimeInNs
@property (nonatomic) NSUInteger secondPassAudioStreamStartTimeInNs; // ivar: _secondPassAudioStreamStartTimeInNs
@property (nonatomic) NSUInteger secondPassCheckerModelKeywordDetectionEndTimeInNs; // ivar: _secondPassCheckerModelKeywordDetectionEndTimeInNs
@property (nonatomic) NSUInteger secondPassCheckerModelKeywordDetectionStartTimeInNs; // ivar: _secondPassCheckerModelKeywordDetectionStartTimeInNs
@property (nonatomic) NSUInteger secondPassFirstAudioPacketReceptionTimeInNs; // ivar: _secondPassFirstAudioPacketReceptionTimeInNs
@property (nonatomic) NSUInteger secondPassLastAudioPacketReceptionTimeInNs; // ivar: _secondPassLastAudioPacketReceptionTimeInNs




@end


#endif