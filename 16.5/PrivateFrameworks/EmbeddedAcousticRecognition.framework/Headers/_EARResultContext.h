// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARRESULTCONTEXT_H
#define _EARRESULTCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "_EARSpeechRecognitionResultPackage.h"

@interface _EARResultContext : NSObject {
    basic_string<char, std::char_traits<char>, std::allocator<char>> _prevBestRecogText;
    vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> _partialResults;
    vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> _loggableConcatResult;
    vector<double, std::allocator<double>> _loggableConcatCosts;
}


@property (nonatomic) BOOL anyResults; // ivar: _anyResults
@property (nonatomic) shared_ptr<EARContinuousListeningResultHelper> continuousListeningResultHelper; // ivar: _continuousListeningResultHelper
@property (nonatomic) NSUInteger countOfIsFinalFalseAlreadyWritten; // ivar: _countOfIsFinalFalseAlreadyWritten
@property ? loggableConcatCosts;
@property ? loggableConcatResult;
@property (readonly, nonatomic) NSUInteger partialResultIndexOffset; // ivar: _partialResultIndexOffset
@property ? partialResults;
@property ? prevBestRecogText;
@property (retain, nonatomic) NSDictionary *prevMuxPackages; // ivar: _prevMuxPackages
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage; // ivar: _prevPackage
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization; // ivar: _prevPackageWithoutPersonalization


-(void)addPartialResultToContext:(*void)arg0 ;
-(void)updateLoggableResultWithCurrentResult:(*void)arg0 currentCosts:(*void)arg1 startMilliseconds:(unsigned int)arg2 ;


@end


#endif