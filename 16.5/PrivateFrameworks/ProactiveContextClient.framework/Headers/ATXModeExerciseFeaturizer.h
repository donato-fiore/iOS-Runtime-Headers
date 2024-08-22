// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEEXERCISEFEATURIZER_H
#define ATXMODEEXERCISEFEATURIZER_H

@class _CDClientContext, _CDContextualChangeRegistration, NSString;
@protocol ATXModeFeaturizer, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeExerciseFeaturizer : NSObject <ATXModeFeaturizer>

 {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isInWorkout; // ivar: _isInWorkout
@property (readonly) Class superclass;


-(id)_createWorkoutPredicate;
-(id)provideFeatures;
-(void)_setUpContextIfNecessary;
-(void)beginListening;
-(void)stopListening;


@end


#endif