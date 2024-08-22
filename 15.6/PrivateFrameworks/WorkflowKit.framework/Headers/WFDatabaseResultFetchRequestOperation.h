// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATABASERESULTFETCHREQUESTOPERATION_H
#define WFDATABASERESULTFETCHREQUESTOPERATION_H

@class NSFetchRequest;


#import "WFDatabaseResultFetchOperation.h"

@interface WFDatabaseResultFetchRequestOperation : WFDatabaseResultFetchOperation

@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest


-(NSInteger)countWithContext:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)entity;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)resultsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif