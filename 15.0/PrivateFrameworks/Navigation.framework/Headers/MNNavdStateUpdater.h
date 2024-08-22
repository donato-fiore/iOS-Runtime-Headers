// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVDSTATEUPDATER_H
#define MNNAVDSTATEUPDATER_H

@class NSString;
@protocol MNNavigationStateObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver>

 {
    MNObserverHashTable *_innerObservers;
    BOOL _hasObservers;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedUpdater;
-(BOOL)isNavigatingOrPredictingDestination;
-(BOOL)isNavigatingWithETA;
-(id)initPrivate;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stateManager:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;


@end


#endif