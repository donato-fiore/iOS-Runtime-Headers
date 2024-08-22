// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUISEARCHMODELZKW_H
#define SPUISEARCHMODELZKW_H

@class SPZKWSession;
@protocol OS_dispatch_queue;


#import "SPUISearchModel.h"

@interface SPUISearchModelZKW : SPUISearchModel {
    NSObject<OS_dispatch_queue> *_queryProcessor;
    BOOL _shouldCacheResults;
    BOOL _newQuery;
}


@property (nonatomic) BOOL ignoreNextPartialUpdate; // ivar: _ignoreNextPartialUpdate
@property (retain, nonatomic) SPZKWSession *session; // ivar: _session


-(id)init;
-(void)_refreshRequested;
-(void)dealloc;
-(void)didReceiveResponse:(id)arg0 ;
-(void)updateWithQueryContext:(id)arg0 ;


@end


#endif