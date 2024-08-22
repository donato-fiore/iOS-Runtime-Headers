// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIMESSAGEEVENT_H
#define TIMESSAGEEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIMessageEvent : NSObject

@property int addressBookCount; // ivar: _addressBookCount
@property int dynamicCount; // ivar: _dynamicCount
@property int emojiPlaneCount; // ivar: _emojiPlaneCount
@property int emojiPopoverCount; // ivar: _emojiPopoverCount
@property int emojiPredictionCount; // ivar: _emojiPredictionCount
@property int emojiSearchCount; // ivar: _emojiSearchCount
@property CGFloat endTime; // ivar: _endTime
@property int finalWordsEnteredCount; // ivar: _finalWordsEnteredCount
@property (retain, nonatomic) NSString *messageText; // ivar: _messageText
@property int multilingualCount; // ivar: _multilingualCount
@property int namedEntitiesCount; // ivar: _namedEntitiesCount
@property int oovCount; // ivar: _oovCount
@property int pqtCount; // ivar: _pqtCount
@property int responseKitCount; // ivar: _responseKitCount
@property CGFloat startTime; // ivar: _startTime
@property int staticCount; // ivar: _staticCount
@property int supplementalLexiconCount; // ivar: _supplementalLexiconCount
@property int textReplacementsCount; // ivar: _textReplacementsCount
@property int wordsEnteredCount; // ivar: _wordsEnteredCount


-(BOOL)hasText:(id)arg0 ;
-(BOOL)hasTextInWordEntry:(id)arg0 ;
-(id)init;
-(int)durationInSecondsFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)arg0 ;
-(void)analyzeWordEntry:(id)arg0 ;
-(void)analyzeWordEntryAligned:(id)arg0 ;
-(void)dispatchWithFeatureUsageMetricsCache:(id)arg0 andContext:(id)arg1 assetAvailabilityStatus:(NSInteger)arg2 ;


@end


#endif