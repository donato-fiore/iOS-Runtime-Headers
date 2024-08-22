// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSPEECHINFOPACKAGE_H
#define AFSPEECHINFOPACKAGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFVoiceCommandGrammarParsePackage.h"

@interface AFSpeechInfoPackage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage; // ivar: _commandGrammarParsePackage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommandGrammarParsePackage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif