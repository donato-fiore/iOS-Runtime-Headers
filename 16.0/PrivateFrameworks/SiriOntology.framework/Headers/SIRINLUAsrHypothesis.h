// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUASRHYPOTHESIS_H
#define SIRINLUASRHYPOTHESIS_H

@class NSArray, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *asrTokens; // ivar: _asrTokens
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUtterance:(id)arg0 probability:(CGFloat)arg1 asrTokens:(id)arg2 uuid:(id)arg3 ;
-(id)initWithUtterance:(id)arg0 probability:(CGFloat)arg1 uuid:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif