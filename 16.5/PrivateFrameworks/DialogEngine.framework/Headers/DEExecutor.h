// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEEXECUTOR_H
#define DEEXECUTOR_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "DEExecutionContext.h"
#import "DEDistribution.h"
#import "DEPatternContext.h"

@interface DEExecutor : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSString *catId; // ivar: _catId
@property (retain, nonatomic) DEExecutionContext *context; // ivar: _context
@property (nonatomic) BOOL createTrace; // ivar: _createTrace
@property (nonatomic) NSInteger currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSDictionary *customPronunciations; // ivar: _customPronunciations
@property (nonatomic) BOOL debug; // ivar: _debug
@property (nonatomic) BOOL deterministic; // ivar: _deterministic
@property (retain, nonatomic) DEDistribution *distribution; // ivar: _distribution
@property (nonatomic) BOOL enableUpdates; // ivar: _enableUpdates
@property (retain, nonatomic) NSDictionary *globalParameters; // ivar: _globalParameters
@property (nonatomic) BOOL grounding; // ivar: _grounding
@property (retain, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (nonatomic) BOOL isLabelMode; // ivar: _isLabelMode
@property (nonatomic) BOOL isSpotlight; // ivar: _isSpotlight
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) BOOL multiuser; // ivar: _multiuser
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) DEPatternContext *patternContext; // ivar: _patternContext
@property (retain, nonatomic) NSString *patternId; // ivar: _patternId
@property (retain, nonatomic) NSString *pluginName; // ivar: _pluginName
@property (nonatomic) unsigned int randomSeed; // ivar: _randomSeed
@property (nonatomic) BOOL resetState; // ivar: _resetState
@property (retain, nonatomic) NSString *responseMode; // ivar: _responseMode
@property (retain, nonatomic) NSString *templateDir; // ivar: _templateDir
@property (nonatomic) BOOL test; // ivar: _test
@property (retain, nonatomic) NSDictionary *userSettings; // ivar: _userSettings
@property (nonatomic) BOOL visual; // ivar: _visual
@property (retain, nonatomic) NSString *voiceGender; // ivar: _voiceGender


+(id)bundleTemplateDir:(id)arg0 ;
+(id)prepareCallback:(SEL)arg0 forContext:(id)arg1 ;
// +(void)executeWithJson:(id)arg0 callback:(id)arg1 completionBlock:(unk)arg2  ;
+(void)executeWithJson:(id)arg0 completionBlock:(id)arg1 ;
// +(void)executeWithJson:(id)arg0 paramsString:(id)arg1 localeString:(id)arg2 callback:(id)arg3 completionBlock:(unk)arg4  ;
+(void)initialize;
+(void)preload;
-(?)consumeContext:(?)arg0 paramsPath:(?)arg1 localePathvisualPath;
-(?)consumeContextForJson;
-(?)getContext;
-(id)execute;
-(id)executeVisual:(id)arg0 ;
-(id)executeWithParams:(id)arg0 locale:(id)arg1 ;
-(id)executeWithParams:(id)arg0 locale:(id)arg1 visual:(id)arg2 ;
-(id)init;
-(void)LogCurareCATExecution:(*void)arg0 ;
-(void)executeVisual:(id)arg0 completionBlock:(id)arg1 ;
-(void)executeWithCompletionBlock:(id)arg0 ;
-(void)executeWithParams:(id)arg0 locale:(id)arg1 completionBlock:(id)arg2 ;
-(void)updateContext:(*void)arg0 paramsPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg1 localePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg2 visualPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg3 ;


@end


#endif