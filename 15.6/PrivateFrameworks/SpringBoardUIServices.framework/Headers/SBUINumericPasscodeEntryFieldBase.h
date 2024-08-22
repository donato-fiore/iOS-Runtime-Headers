// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUINUMERICPASSCODEENTRYFIELDBASE_H
#define SBUINUMERICPASSCODEENTRYFIELDBASE_H

@class NSMutableCharacterSet;


#import "SBUIPasscodeEntryField.h"

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {
    NSMutableCharacterSet *_numericTrimmingSet;
}


@property (nonatomic) BOOL allowsNewlineAcceptance; // ivar: _allowsNewlineAcceptance
@property (nonatomic) BOOL autoAcceptWhenMaxNumbersMet; // ivar: _autoAcceptWhenMaxNumbersMet
@property (nonatomic) NSUInteger maxNumbersAllowed; // ivar: _maxNumbersAllowed


-(BOOL)_hasMaxDigitsSpecified;
-(BOOL)resignFirstResponder;
-(BOOL)shouldInsertPasscodeText:(id)arg0 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(void)_appendString:(id)arg0 ;
-(void)_deleteLastCharacter;
-(void)_reallyAppendString:(id)arg0 ;


@end


#endif