// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXDISCOVERYCONTROLLER_H
#define _EXDISCOVERYCONTROLLER_H

@class NSMutableDictionary, NSString, LSObserver;
@protocol LSObserverDelegate;

#import <Foundation/Foundation.h>


@interface _EXDiscoveryController : NSObject <LSObserverDelegate>



@property (retain) NSMutableDictionary *activeQueries; // ivar: _activeQueries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) LSObserver *observer; // ivar: _observer
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)currentProcessCanRunQuery:(id)arg0 error:(*id)arg1 ;
-(id)extensionsMatchingQueries:(id)arg0 ;
-(id)extensionsMatchingQuery:(id)arg0 ;
-(id)init;
-(void)addActiveQueryObserver:(id)arg0 query:(id)arg1 ;
-(void)observerDidObserveDatabaseChange:(id)arg0 ;
-(void)removeActiveQueryObserver:(id)arg0 query:(id)arg1 ;


@end


#endif