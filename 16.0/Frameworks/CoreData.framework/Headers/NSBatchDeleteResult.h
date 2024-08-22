// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSBATCHDELETERESULT_H
#define NSBATCHDELETERESULT_H



#import "NSPersistentStoreResult.h"

@interface NSBatchDeleteResult : NSPersistentStoreResult

@property (readonly) id *result; // ivar: _aggregatedResult
@property (readonly) NSUInteger resultType; // ivar: _resultType


-(id)initWithResultType:(NSUInteger)arg0 andObject:(id)arg1 ;
-(id)initWithSubresults:(id)arg0 ;
-(void)dealloc;


@end


#endif