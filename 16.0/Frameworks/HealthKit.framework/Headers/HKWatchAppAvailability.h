// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWATCHAPPAVAILABILITY_H
#define HKWATCHAPPAVAILABILITY_H

@class NSArray, NSString, HKObserverSet<HKWatchAppAvailabilityObserver>, ASDAppQuery;
@protocol ASDAppQueryResultsObserver;

#import <Foundation/Foundation.h>


@interface HKWatchAppAvailability : NSObject <ASDAppQueryResultsObserver>



@property (retain, nonatomic) NSArray *_test_apps; // ivar: __test_apps
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger installState; // ivar: _installState
@property (retain, nonatomic) HKObserverSet<HKWatchAppAvailabilityObserver> *observers; // ivar: _observers
@property (retain, nonatomic) ASDAppQuery *query; // ivar: _query
@property (readonly) Class superclass;


-(id)findApplicationIn:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)appInstallStateOnWatch:(id)arg0 completion:(id)arg1 ;
-(void)appQuery:(id)arg0 resultsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif