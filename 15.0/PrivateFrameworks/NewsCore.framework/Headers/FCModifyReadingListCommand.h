// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMODIFYREADINGLISTCOMMAND_H
#define FCMODIFYREADINGLISTCOMMAND_H



#import "FCModifyRecordsCommand.h"

@interface FCModifyReadingListCommand : FCModifyRecordsCommand



+(id)desiredKeys;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)initWithReadingListEntries:(id)arg0 merge:(BOOL)arg1 ;


@end


#endif