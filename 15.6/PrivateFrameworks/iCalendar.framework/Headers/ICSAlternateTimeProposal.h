// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSALTERNATETIMEPROPOSAL_H
#define ICSALTERNATETIMEPROPOSAL_H



#import "ICSProperty.h"
#import "ICSDateTimeValue.h"

@interface ICSAlternateTimeProposal : ICSProperty

@property (retain, nonatomic) ICSDateTimeValue *startDate;
@property (nonatomic) int status;


+(id)ICSStringFromAlternateTimeProposalStatus:(int)arg0 ;
+(id)_parseICSString:(id)arg0 ;
+(id)alternateTimeProposalFromICSCString:(id)arg0 ;
+(int)statusFromICSString:(id)arg0 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif