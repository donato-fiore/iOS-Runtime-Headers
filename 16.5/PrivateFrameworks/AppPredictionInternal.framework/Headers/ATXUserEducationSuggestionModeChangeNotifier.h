// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSEREDUCATIONSUGGESTIONMODECHANGENOTIFIER_H
#define ATXUSEREDUCATIONSUGGESTIONMODECHANGENOTIFIER_H

@class BMBiomeScheduler, BPSSink, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionModeChangeNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(id)init;
-(void)processModeChangeEvent:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif