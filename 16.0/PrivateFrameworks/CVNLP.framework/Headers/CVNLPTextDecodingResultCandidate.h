// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPTEXTDECODINGRESULTCANDIDATE_H
#define CVNLPTEXTDECODINGRESULTCANDIDATE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingResultCandidate : NSObject

@property CGFloat activationScore; // ivar: _activationScore
@property (readonly, copy, nonatomic) NSString *fullString;
@property CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


-(id)initWithTokens:(id)arg0 score:(CGFloat)arg1 activationScore:(CGFloat)arg2 ;


@end


#endif