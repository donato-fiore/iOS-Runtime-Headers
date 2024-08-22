// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBJSAPPQUERYMANAGER_H
#define AMSUIWEBJSAPPQUERYMANAGER_H

@class NSString, NSMutableDictionary;
@protocol ASDAppQueryResultsObserver, AMSUIWebJSAppQueryManagerDelegate;

#import <Foundation/Foundation.h>


@interface AMSUIWebJSAppQueryManager : NSObject <ASDAppQueryResultsObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIWebJSAppQueryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *observingQueries; // ivar: _observingQueries
@property (readonly) Class superclass;


-(id)_encodeApp:(id)arg0 ;
-(id)_executeAppQuery:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)queryAppsWithBundleIDs:(id)arg0 startObserving:(BOOL)arg1 ;
-(id)queryAppsWithStoreItemIDs:(id)arg0 startObserving:(BOOL)arg1 ;
-(void)_postMediaQueryResultsChangeEventWithApps:(id)arg0 ;
-(void)appQuery:(id)arg0 resultsDidChange:(id)arg1 ;
-(void)invalidate;
-(void)stopObservingAllApps;
-(void)stopObservingAppsWithBundleIDs:(id)arg0 ;
-(void)stopObservingAppsWithStoreItemIDs:(id)arg0 ;


@end


#endif