// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMODIFYUSEREVENTHISTORYCOMMAND_H
#define FCMODIFYUSEREVENTHISTORYCOMMAND_H



#import "FCModifyRecordsCommand.h"

@interface FCModifyUserEventHistoryCommand : FCModifyRecordsCommand



-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)ckRecordWithSessionID:(id)arg0 data:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 data:(id)arg1 ;
-(id)initWithSessions:(id)arg0 ;


@end


#endif