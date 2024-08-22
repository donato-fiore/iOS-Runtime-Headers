// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFVOICECOMMANDGRAMMARPARSECANDIDATE_H
#define AFVOICECOMMANDGRAMMARPARSECANDIDATE_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFVoiceCommandGrammarParseCandidate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *commandId; // ivar: _commandId
@property (readonly, nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, copy, nonatomic) NSDictionary *paramMatches; // ivar: _paramMatches


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommandId:(id)arg0 isComplete:(BOOL)arg1 paramMatches:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif