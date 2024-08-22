// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAYBACKTEST_H
#define PLAYBACKTEST_H



#import "AutocorrectionTest.h"

@interface PlaybackTest : AutocorrectionTest

@property (readonly, nonatomic) id *expected; // ivar: _expected
@property (readonly, nonatomic) id *intended; // ivar: _intended


+(id)loadFromPlaybackFile:(id)arg0 ;
+(id)loadFromSentence:(id)arg0 withCatenation:(BOOL)arg1 ;
+(id)loadFromTextInputFile:(id)arg0 withCatenation:(BOOL)arg1 ;
+(id)sentenceToTransliteratedPlaybackTest:(id)arg0 withCatenation:(BOOL)arg1 ;
+(id)testsWithIntendedOutput:(id)arg0 expectedOutput:(id)arg1 ;
+(id)testsWithIntendedOutput:(id)arg0 expectedOutput:(id)arg1 corpusId:(id)arg2 ;


@end


#endif