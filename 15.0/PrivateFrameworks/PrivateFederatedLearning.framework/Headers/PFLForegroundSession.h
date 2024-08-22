// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLFOREGROUNDSESSION_H
#define PFLFOREGROUNDSESSION_H

@class NSDictionary, NSMutableSet;
@protocol PFLTaskDelegate, PFLResumable, PFLDataSource, PFLForegroundSessionDelegate;

#import <Foundation/Foundation.h>

#import "PFLNetworkResourceManager.h"

@interface PFLForegroundSession : NSObject <PFLTaskDelegate, PFLResumable>



@property (readonly, nonatomic) NSObject<PFLDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<PFLForegroundSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *identifierTodataSource; // ivar: _identifierTodataSource
@property (readonly, nonatomic) BOOL ignoreEligibilityCheck; // ivar: _ignoreEligibilityCheck
@property (readonly, nonatomic) PFLNetworkResourceManager *resourceManager; // ivar: _resourceManager
@property (readonly, nonatomic) NSMutableSet *runningTasks; // ivar: _runningTasks


-(BOOL)isEligibleWithEligibilityIdentifier:(id)arg0 eligibilityProbability:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 networkResourceManager:(id)arg1 ignoreEligibilityCheck:(BOOL)arg2 ;
-(id)initWithNetworkResourceManager:(id)arg0 dataSource:(id)arg1 ;
-(void)_finish;
-(void)removeUnusedResourcesWithConfiguration:(id)arg0 ;
-(void)resume;
-(void)suspend;
-(void)task:(id)arg0 didProgressToState:(NSUInteger)arg1 withError:(id)arg2 ;


@end


#endif