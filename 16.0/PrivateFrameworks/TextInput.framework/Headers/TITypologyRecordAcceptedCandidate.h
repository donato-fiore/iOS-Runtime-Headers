// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYRECORDACCEPTEDCANDIDATE_H
#define TITYPOLOGYRECORDACCEPTEDCANDIDATE_H

@class NSString;


#import "TITypologyRecord.h"
#import "TIKeyboardCandidate.h"
#import "TIKeyboardConfiguration.h"
#import "TIKeyboardState.h"

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // ivar: _keyboardConfig
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (copy, nonatomic) NSString *textToCommit; // ivar: _textToCommit


+(BOOL)supportsSecureCoding;
-(id)changedText;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(id)textSummary;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif