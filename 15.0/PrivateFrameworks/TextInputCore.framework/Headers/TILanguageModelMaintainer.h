// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILANGUAGEMODELMAINTAINER_H
#define TILANGUAGEMODELMAINTAINER_H

@class NSString, NSTimer, NSDate;
@protocol TIKeyboardActivityObserving;

#import <Foundation/Foundation.h>


@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *dynamicLearningCacheTimer; // ivar: _dynamicLearningCacheTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *nextEligibleMaintenanceDate; // ivar: _nextEligibleMaintenanceDate
@property (readonly) Class superclass;


+(id)sharedLanguageModelMaintainer;
-(BOOL)isMaintenanceDue;
-(id)init;
-(void)dealloc;
-(void)dynamicLearningCacheTimerFired:(id)arg0 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)performMaintenanceIfNecessary;
-(void)touchDynamicLearningCacheTimer;


@end


#endif