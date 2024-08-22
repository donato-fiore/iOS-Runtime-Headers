// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMODIFYHISTORYCOMMAND_H
#define FCMODIFYHISTORYCOMMAND_H

@class NSArray;


#import "FCModifyRecordsCommand.h"

@interface FCModifyHistoryCommand : FCModifyRecordsCommand

@property (readonly, copy, nonatomic) NSArray *historyItems; // ivar: _historyItems
@property (readonly, copy, nonatomic) NSArray *recordItems; // ivar: _recordItems


+(id)desiredKeys;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)initWithHistoryItems:(id)arg0 merge:(BOOL)arg1 ;
-(id)recordZoneName;


@end


#endif