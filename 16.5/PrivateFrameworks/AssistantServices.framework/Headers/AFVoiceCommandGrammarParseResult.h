// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFVOICECOMMANDGRAMMARPARSERESULT_H
#define AFVOICECOMMANDGRAMMARPARSERESULT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFVoiceCommandGrammarParseResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *parseCandidates; // ivar: _parseCandidates
@property (readonly, copy, nonatomic) NSString *utterance; // ivar: _utterance


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUtterance:(id)arg0 parseCandidates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif