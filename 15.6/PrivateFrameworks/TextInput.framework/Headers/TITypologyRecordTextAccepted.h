// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYRECORDTEXTACCEPTED_H
#define TITYPOLOGYRECORDTEXTACCEPTED_H



#import "TITypologyRecord.h"
#import "TIKeyboardCandidate.h"

@interface TITypologyRecordTextAccepted : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate


+(BOOL)supportsSecureCoding;
-(id)changedText;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(id)textSummary;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif