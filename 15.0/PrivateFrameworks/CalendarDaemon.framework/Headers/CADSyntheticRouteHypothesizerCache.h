// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADSYNTHETICROUTEHYPOTHESIZERCACHE_H
#define CADSYNTHETICROUTEHYPOTHESIZERCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CADSyntheticRouteHypothesizerCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap; // ivar: _eventExternalURLToSyntheticRouteHypothesizerMap
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)_init;
-(id)syntheticRouteHypothesizerForEventExternalURL:(id)arg0 ;
-(void)addSyntheticRouteHypothesizer:(id)arg0 forEventExternalURL:(id)arg1 ;
-(void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg0 ;


@end


#endif