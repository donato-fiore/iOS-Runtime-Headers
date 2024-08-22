// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSYNCSESSIONPREDICTOR_H
#define CPLSYNCSESSIONPREDICTOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "CPLSyncSessionPrediction.h"

@interface CPLSyncSessionPredictor : NSObject {
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
}


@property (readonly) CPLSyncSessionPrediction *currentPrediction; // ivar: _currentPrediction


-(id)description;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updatePredictionWithValuesAndTypes:(id)arg0 ;


@end


#endif