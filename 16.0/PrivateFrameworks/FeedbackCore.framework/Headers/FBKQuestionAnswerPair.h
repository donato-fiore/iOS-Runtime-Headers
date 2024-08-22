// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKQUESTIONANSWERPAIR_H
#define FBKQUESTIONANSWERPAIR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBKQuestionAnswerPair : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *answerText; // ivar: _answerText
@property (nonatomic) NSUInteger answerType; // ivar: _answerType
@property (nonatomic) BOOL isRequired; // ivar: _isRequired
@property (retain, nonatomic) NSString *questionText; // ivar: _questionText


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setPropertiesFromJSONObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithQuestionText:(id)arg0 andAnswerText:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif