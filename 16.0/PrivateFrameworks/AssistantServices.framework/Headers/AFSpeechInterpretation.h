// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHINTERPRETATION_H
#define AFSPEECHINTERPRETATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechInterpretation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)averageConfidenceScore;
-(NSInteger)confidenceScore;
-(NSInteger)confidenceScoreAvg;
-(NSInteger)confidenceScoreMax;
-(NSInteger)confidenceScoreMin;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)text;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif