// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSPHONENUMBEREDITINGPANE_H
#define TPSPHONENUMBEREDITINGPANE_H

@class PSTextEditingPane, NSString;



@interface TPSPhoneNumberEditingPane : PSTextEditingPane

@property (copy, nonatomic) NSString *previousStringSuggestion; // ivar: _previousStringSuggestion


-(struct ? )suggestionsForString:(id)arg0 inputIndex:(unsigned int)arg1 ;
-(void)setPreferenceSpecifier:(id)arg0 ;


@end


#endif