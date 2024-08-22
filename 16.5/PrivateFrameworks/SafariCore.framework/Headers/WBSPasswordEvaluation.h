// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDEVALUATION_H
#define WBSPASSWORDEVALUATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "WBSPasswordPatternMatch.h"

@interface WBSPasswordEvaluation : NSObject

@property (readonly, nonatomic) WBSPasswordPatternMatch *bestPatternMatchForUserFeedback;
@property (readonly, nonatomic) NSInteger evaluationType; // ivar: _evaluationType
@property (readonly, nonatomic) CGFloat guessesRequired; // ivar: _guessesRequired
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSArray *patternMatches; // ivar: _patternMatches
@property (readonly, nonatomic) NSUInteger strength;
@property (readonly, nonatomic) BOOL userShouldBeShownActiveWarning;
@property (readonly, nonatomic) BOOL userShouldBeShownPassiveWarning;


-(BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_userFeedbackLengthScoreForPatternMatch:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bestPatternMatchOfType:(NSUInteger)arg0 ;
-(id)_passwordFeedbackStringWithPasswordVisibility:(NSUInteger)arg0 ;
-(id)compactDescriptionWithPasswordColumnWidth:(NSUInteger)arg0 includePatternMatches:(BOOL)arg1 ;
-(id)initWithEvaluationType:(NSInteger)arg0 password:(id)arg1 patternMatches:(id)arg2 guessesRequired:(CGFloat)arg3 ;
-(id)userFeedbackStringWithPasswordVisibility:(NSUInteger)arg0 ;


@end


#endif