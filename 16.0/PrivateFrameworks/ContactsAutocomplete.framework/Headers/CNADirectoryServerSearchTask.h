// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNADIRECTORYSERVERSEARCHTASK_H
#define CNADIRECTORYSERVERSEARCHTASK_H

@class CNTask, CNResult, NSArray, CNCancelationToken, CNContactStore;


#import "CNAutocompleteFetchRequest.h"

@interface CNADirectoryServerSearchTask : CNTask {
    CNResult *_returnValue;
    NSArray *_containers;
    NSArray *_daResults;
    NSArray *_results;
}


@property (readonly, nonatomic) CNCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNAutocompleteFetchRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 contactStore:(id)arg1 cancelationToken:(id)arg2 ;
-(id)makeQueryForContainer:(id)arg0 withLatch:(id)arg1 andCollectConsumers:(id)arg2 ;
-(id)run;
-(void)convertResults;
-(void)createReturnValue;
-(void)fetchServerSearchContainers;
-(void)searchServerContainers;
-(void)validateRequest;


@end


#endif