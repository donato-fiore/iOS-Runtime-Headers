// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTCHECKPOINTTRACE_H
#define CUTCHECKPOINTTRACE_H

@class NSMutableArray;


#import "CUTCheckpointRange.h"

@interface CUTCheckpointTrace : CUTCheckpointRange

@property (retain, nonatomic) NSMutableArray *mutableCheckpoints; // ivar: _mutableCheckpoints


-(id)_identifierWithExtraIdentifier:(id)arg0 ;
-(id)appendCheckpoint:(id)arg0 ;
-(id)checkpoints;
-(id)description;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(id)instantCheckpointWithName:(id)arg0 ;
-(id)instantCheckpointWithName:(id)arg0 extraIdentifier:(id)arg1 ;
-(id)rangeCheckpointWithName:(id)arg0 ;
-(id)rangeCheckpointWithName:(id)arg0 extraIdentifier:(id)arg1 ;
-(void)_appendReportToMutableString:(id)arg0 indentation:(NSInteger)arg1 paddedNameLength:(NSInteger)arg2 ;
-(void)freeze;
-(void)setAssertsUseAfterFreeze:(BOOL)arg0 ;


@end


#endif