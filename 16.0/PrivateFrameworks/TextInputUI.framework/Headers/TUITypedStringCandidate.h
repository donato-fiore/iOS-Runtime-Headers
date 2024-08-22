// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUITYPEDSTRINGCANDIDATE_H
#define TUITYPEDSTRINGCANDIDATE_H

@class TIKeyboardCandidateSingle, NSString;



@interface TUITypedStringCandidate : TIKeyboardCandidateSingle

@property (retain, nonatomic) NSString *displayLabel; // ivar: _displayLabel


+(id)typedStringCandidateWithLocale:(id)arg0 typedString:(id)arg1 rawTypedString:(id)arg2 ;
-(id)label;


@end


#endif