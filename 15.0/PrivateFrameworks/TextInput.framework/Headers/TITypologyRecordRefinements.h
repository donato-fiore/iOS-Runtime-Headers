// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYRECORDREFINEMENTS_H
#define TITYPOLOGYRECORDREFINEMENTS_H



#import "TITypologyRecord.h"
#import "TIKeyboardCandidate.h"
#import "TIKeyboardState.h"
#import "TIAutocorrectionList.h"

@interface TITypologyRecordRefinements : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (retain, nonatomic) TIAutocorrectionList *refinements; // ivar: _refinements


+(BOOL)supportsSecureCoding;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif