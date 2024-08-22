// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLULEGACYNLCONTEXT_H
#define SIRINLULEGACYNLCONTEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLULegacyNLContext : NSObject <NSSecureCoding>



@property BOOL dictationPrompt; // ivar: _dictationPrompt
@property BOOL fromPommes; // ivar: _fromPommes
@property (nonatomic) int legacyContextSource; // ivar: _legacyContextSource
@property BOOL listenAfterSpeaking; // ivar: _listenAfterSpeaking
@property (retain, nonatomic) NSString *previousDomainName; // ivar: _previousDomainName
@property (retain, nonatomic) NSArray *renderedTexts; // ivar: _renderedTexts
@property BOOL strictPrompt; // ivar: _strictPrompt


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictationPrompt:(BOOL)arg0 strictPrompt:(BOOL)arg1 previousDomainName:(id)arg2 listenAfterSpeaking:(BOOL)arg3 ;
-(id)initWithDictationPrompt:(BOOL)arg0 strictPrompt:(BOOL)arg1 previousDomainName:(id)arg2 listenAfterSpeaking:(BOOL)arg3 renderedTexts:(id)arg4 ;
-(id)initWithDictationPrompt:(BOOL)arg0 strictPrompt:(BOOL)arg1 previousDomainName:(id)arg2 listenAfterSpeaking:(BOOL)arg3 renderedTexts:(id)arg4 legacyContextSource:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif