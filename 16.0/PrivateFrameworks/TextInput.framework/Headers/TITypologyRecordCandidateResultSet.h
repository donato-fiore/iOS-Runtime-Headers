// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYRECORDCANDIDATERESULTSET_H
#define TITYPOLOGYRECORDCANDIDATERESULTSET_H



#import "TITypologyRecord.h"
#import "TIKeyboardState.h"
#import "TIKeyboardCandidateResultSet.h"

@interface TITypologyRecordCandidateResultSet : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (retain, nonatomic) TIKeyboardCandidateResultSet *resultSet; // ivar: _resultSet


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