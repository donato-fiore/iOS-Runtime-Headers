// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYSTATISTICCURRENTAUTOCORRECTIONS_H
#define TITYPOLOGYSTATISTICCURRENTAUTOCORRECTIONS_H



#import "TITypologyStatistic.h"
#import "TIAutocorrectionList.h"
#import "TICandidateRequestToken.h"

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic

@property (retain, nonatomic) TIAutocorrectionList *autocorrections; // ivar: _autocorrections
@property (retain, nonatomic) TICandidateRequestToken *requestToken; // ivar: _requestToken


-(void)visitRecordAutocorrections:(id)arg0 ;


@end


#endif