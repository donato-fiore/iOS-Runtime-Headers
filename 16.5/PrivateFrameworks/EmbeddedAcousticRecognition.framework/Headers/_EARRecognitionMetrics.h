// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARRECOGNITIONMETRICS_H
#define _EARRECOGNITIONMETRICS_H

@class NSMutableArray, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARRecognitionMetrics : NSObject <NSCopying>

 {
    weak_ptr<quasar::SpeechRecognizer> _recognizer;
}


@property (copy, nonatomic) NSMutableArray *allItnRunIntervals; // ivar: _allItnRunIntervals
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed; // ivar: _isEmojiDisambiguationUsed
@property (readonly, nonatomic) BOOL isEmojiExpectedButNotRecognized; // ivar: _isEmojiExpectedButNotRecognized
@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed; // ivar: _isEmojiPersonalizationUsed
@property (readonly, nonatomic) NSNumber *itnDurationInNs; // ivar: _itnDurationInNs
@property (readonly, copy, nonatomic) NSArray *pauseDurations; // ivar: _pauseDurations
@property (readonly, copy, nonatomic) NSArray *recognizedEmojis; // ivar: _recognizedEmojis


-(?)initWithRecognizer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addEmojiRecognitionMetrics:(id)arg0 recognizedEmojis:(id)arg1 ;
-(void)addItnRunIntervals:(id)arg0 ;
-(void)addPauseDurationMetric;


@end


#endif