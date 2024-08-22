// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDICTATIONNLURESULT_H
#define AFDICTATIONNLURESULT_H

@class SIRINLUEXTERNALCDMNluResponse;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AFVoiceCommandGrammarParsePackage.h"

@interface AFDictationNLUResult : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage; // ivar: _commandGrammarParsePackage
@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse; // ivar: _nluResponse


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif