// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONINTERPRETATION_H
#define UIDICTATIONINTERPRETATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDictationInterpretation : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat averageConfidenceScore; // ivar: _averageConfidenceScore
@property (readonly, nonatomic) BOOL removeSpaceAfter;
@property (readonly, nonatomic) BOOL removeSpaceBefore;
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
+(id)serializedInterpretationFromTokens:(id)arg0 transform:(struct __CFString *)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTokens:(id)arg0 ;
-(id)initWithTokens:(id)arg0 score:(CGFloat)arg1 ;
-(id)serializedInterpretationWithTransform:(struct __CFString *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif