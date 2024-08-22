// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTAUTOFILLSUGGESTION_H
#define UITEXTAUTOFILLSUGGESTION_H

@class NSString;


#import "UITextSuggestion.h"

@interface UITextAutofillSuggestion : UITextSuggestion

@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(id)autofillSuggestionWithUsername:(id)arg0 password:(id)arg1 ;
-(id)_keyboardCandidate;
-(id)initWithUsername:(id)arg0 password:(id)arg1 ;


@end


#endif