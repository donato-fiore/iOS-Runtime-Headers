// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLINVALIDBATCHSTORAGE_H
#define CPLINVALIDBATCHSTORAGE_H



#import "CPLEngineTransientRepositoryBatchStorage.h"

@interface CPLInvalidBatchStorage : CPLEngineTransientRepositoryBatchStorage



-(BOOL)hasChangesInScopeWithIdentifier:(id)arg0 ;
-(id)initWithTransientRepository:(id)arg0 scope:(id)arg1 ;


@end


#endif