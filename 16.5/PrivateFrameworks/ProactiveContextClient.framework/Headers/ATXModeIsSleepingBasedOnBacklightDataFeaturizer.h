// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEISSLEEPINGBASEDONBACKLIGHTDATAFEATURIZER_H
#define ATXMODEISSLEEPINGBASEDONBACKLIGHTDATAFEATURIZER_H

@class NSString, NSHashTable;
@protocol ATXModeFeaturizer, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeIsSleepingBasedOnBacklightDataFeaturizer : NSObject <ATXModeFeaturizer>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSHashTable *timers; // ivar: _timers


-(id)init;
-(id)provideFeatures;
-(id)queryEvents;
-(id)returnValueOnError;
-(void)addTimerForDate:(id)arg0 ;
-(void)beginListening;
-(void)handleNewEvent;
-(void)stopListening;


@end


#endif