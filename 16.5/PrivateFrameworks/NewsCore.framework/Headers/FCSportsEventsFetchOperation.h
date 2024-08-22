// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSEVENTSFETCHOPERATION_H
#define FCSPORTSEVENTSFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext, FCNewsAppConfigurationManager, FCSportsEventsFetchOperationDelegate;


#import "FCOperation.h"
#import "FCTagController.h"
#import "FCCachePolicy.h"

@interface FCSportsEventsFetchOperation : FCOperation {
    id<FCContentContext> *_context;
    FCTagController *_tagController;
    NSArray *_sportsEventIDs;
    id<FCNewsAppConfigurationManager> *_appConfigurationManager;
    id<FCSportsEventsFetchOperationDelegate> *_delegate;
    NSArray *_resultSportsEvents;
}


@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)initWithContext:(id)arg0 tagController:(id)arg1 sportsEventIDs:(id)arg2 delegate:(id)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif