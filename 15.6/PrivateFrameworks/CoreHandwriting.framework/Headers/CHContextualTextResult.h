// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCONTEXTUALTEXTRESULT_H
#define CHCONTEXTUALTEXTRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHTokenizedTextResult.h"

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) NSString *terminatingSpecialCharacter; // ivar: _terminatingSpecialCharacter
@property (retain, nonatomic) CHTokenizedTextResult *textResult; // ivar: _textResult


+(id)defaultWordTerminationCharacterForLocale:(id)arg0 ;
-(id)initWithTextResult:(id)arg0 terminatingSpecialCharacter:(id)arg1 ;


@end


#endif