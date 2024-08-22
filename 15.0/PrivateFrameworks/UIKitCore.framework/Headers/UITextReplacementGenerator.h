// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTREPLACEMENTGENERATOR_H
#define UITEXTREPLACEMENTGENERATOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UITextRange.h"

@interface UITextReplacementGenerator : NSObject

@property (retain, nonatomic) UITextRange *replacementRange; // ivar: _replacementRange
@property (copy, nonatomic) NSString *stringToReplace; // ivar: _stringToReplace


-(BOOL)isStringToReplaceMisspelled;
-(BOOL)shouldAllowString:(id)arg0 intoReplacements:(id)arg1 ;
-(id)replacementWithText:(id)arg0 ;
-(id)replacements;
-(void)addPlaceholderForEmptyReplacements:(id)arg0 ;


@end


#endif