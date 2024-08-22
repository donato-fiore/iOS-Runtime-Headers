// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYSERIESMANAGER_H
#define HDQUANTITYSERIESMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDQuantitySeriesManager : NSObject {
    NSMutableDictionary *_observerLock_observersByType;
    os_unfair_lock_s _observerLock;
}


@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)discardSeries:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertValues:(id)arg0 series:(id)arg1 error:(*id)arg2 ;
-(id)freezeSeries:(id)arg0 metadata:(id)arg1 endDate:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)addObserver:(id)arg0 forType:(id)arg1 queue:(id)arg2 ;
-(void)removeObserver:(id)arg0 forType:(id)arg1 ;
-(void)samplesAdded:(id)arg0 type:(id)arg1 anchor:(id)arg2 transaction:(id)arg3 ;
-(void)samplesJournaled:(id)arg0 type:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 transaction:(id)arg2 ;


@end


#endif