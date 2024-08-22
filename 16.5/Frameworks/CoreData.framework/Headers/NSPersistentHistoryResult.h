// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTHISTORYRESULT_H
#define NSPERSISTENTHISTORYRESULT_H



#import "NSPersistentStoreResult.h"

@interface NSPersistentHistoryResult : NSPersistentStoreResult

@property (readonly) id *result; // ivar: _aggregatedResult
@property (readonly) NSInteger resultType; // ivar: _resultType


+(id)_processResult:(id)arg0 forRequest:(id)arg1 withProvider:(id)arg2 ;
-(id)description;
-(id)initWithResultType:(NSInteger)arg0 andResult:(id)arg1 ;
-(id)initWithSubresults:(id)arg0 ;
-(void)dealloc;


@end


#endif