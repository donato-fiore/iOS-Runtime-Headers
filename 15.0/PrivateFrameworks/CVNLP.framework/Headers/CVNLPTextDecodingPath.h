// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPTEXTDECODINGPATH_H
#define CVNLPTEXTDECODINGPATH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingPath : NSObject

@property (readonly, nonatomic) NSInteger characterCount; // ivar: _characterCount
@property (readonly, nonatomic) CGFloat characterLanguageModelLogProbability; // ivar: _characterLanguageModelLogProbability
@property (readonly, nonatomic) CGFloat lexiconScore; // ivar: _lexiconScore
@property (readonly, nonatomic) CGFloat modelLogProbability; // ivar: _modelLogProbability
@property (readonly, nonatomic) NSInteger pseudoSpaceCount; // ivar: _pseudoSpaceCount
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSInteger tokenCount; // ivar: _tokenCount
@property (readonly, nonatomic) CGFloat wordLanguageModelLogProbability; // ivar: _wordLanguageModelLogProbability


+(id)defaultPathScoringFunction:(SEL)arg0 ;
+(id)defaultPathScoringFunctionForLanguageResourceBundle:(SEL)arg0 ;
-(id)init;
-(id)initWithCharacterLanguageModelLogProbability:(CGFloat)arg0 wordLanguageModelLogProbability:(CGFloat)arg1 lexiconScore:(CGFloat)arg2 string:(id)arg3 ;


@end


#endif