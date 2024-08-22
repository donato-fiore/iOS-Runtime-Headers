// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3UPDATESIRIINDEXOPERATION_H
#define ML3UPDATESIRIINDEXOPERATION_H

@class NSMutableArray;


#import "ML3DatabaseOperation.h"

@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation

@property (readonly, nonatomic) NSMutableArray *donators; // ivar: _donators


-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_performFullIndexToRevision:(NSInteger)arg0 withDatasetStream:(id)arg1 ;
-(BOOL)_performIncrementalIndexToRevision:(NSInteger)arg0 withDatasetStream:(id)arg1 ;
-(NSUInteger)type;
-(void)_enumerateUserIDsWithBlock:(id)arg0 ;


@end


#endif