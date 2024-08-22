// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCONTEXTUALTEXTRESULT_H
#define CHCONTEXTUALTEXTRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHStrokeGroup.h"
#import "CHTokenizedTextResult.h"

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) CHStrokeGroup *strokeGroup; // ivar: _strokeGroup
@property (retain, nonatomic) NSString *terminatingSpecialCharacter; // ivar: _terminatingSpecialCharacter
@property (retain, nonatomic) CHTokenizedTextResult *textResult; // ivar: _textResult


+(id)defaultWordTerminationCharacterForLocale:(id)arg0 ;
-(id)initWithTextResult:(id)arg0 terminatingSpecialCharacter:(id)arg1 strokeGroup:(id)arg2 ;


@end


#endif