// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIPINYINDISAMBIGUATIONCANDIDATE_H
#define TIPINYINDISAMBIGUATIONCANDIDATE_H

@class NSString;


#import "TIKeyboardCandidateSingle.h"

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
}


@property (nonatomic, getter=isGeneratedByChoosePinyin) BOOL generatedByChoosePinyin; // ivar: _generatedByChoosePinyin


+(BOOL)supportsSecureCoding;
+(id)candidateWithPinyinSyllable:(id)arg0 ;
+(int)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPinyinSyllable:(id)arg0 ;
-(id)label;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif