// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


@property (retain, nonatomic) SPZKWSession *session; // ivar: _session


-(id)init;
-(void)dealloc;
-(void)updateWithQueryContext:(id)arg0 ;


@end


#endif