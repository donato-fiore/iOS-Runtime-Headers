// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATABASERESULTTIEREDFETCHREQUESTOPERATION_H
#define WFDATABASERESULTTIEREDFETCHREQUESTOPERATION_H

@class NSArray;


#import "WFDatabaseResultFetchOperation.h"

@interface WFDatabaseResultTieredFetchRequestOperation : WFDatabaseResultFetchOperation

@property (readonly, nonatomic) NSArray *fetchRequests; // ivar: _fetchRequests
@property (readonly, nonatomic) NSInteger resultsLimit; // ivar: _resultsLimit


-(NSInteger)countWithContext:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)entity;
-(id)initWithFetchRequests:(id)arg0 resultsLimit:(NSInteger)arg1 ;
-(id)resultsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif