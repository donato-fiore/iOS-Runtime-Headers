// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHPHRASE_H
#define AFSPEECHPHRASE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechPhrase : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *interpretations; // ivar: _interpretations
@property (nonatomic) BOOL isLowConfidence; // ivar: _isLowConfidence


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allInterpretationStringsAndScores;
-(id)bestInterpretation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)firstInterpretation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterpretations:(id)arg0 isLowConfidence:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif