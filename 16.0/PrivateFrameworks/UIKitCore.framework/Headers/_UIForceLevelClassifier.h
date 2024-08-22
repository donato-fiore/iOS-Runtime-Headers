// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFORCELEVELCLASSIFIER_H
#define _UIFORCELEVELCLASSIFIER_H

@class NSObservationSource, NSMutableDictionary, NSArray, NSString;
@protocol NSObserver, _UIForceLevelClassifierDelegate;

#import <Foundation/Foundation.h>


@interface _UIForceLevelClassifier : NSObject <NSObserver>

 {
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
}


@property (readonly, nonatomic) NSInteger currentForceLevel; // ivar: _currentForceLevel
@property (nonatomic) CGFloat currentTouchForceMultiplier; // ivar: _currentTouchForceMultiplier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIForceLevelClassifierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL respectsSystemGestureTouchFiltering; // ivar: _respectsSystemGestureTouchFiltering
@property (readonly) Class superclass;


-(BOOL)wantsUnclampedForceValues;
-(id)init;
-(id)observableForProgressToForceLevel:(NSInteger)arg0 ;
-(id)observableForProgressToForceLevel:(NSInteger)arg0 minimumRequiredForceLevel:(NSInteger)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg0 ;
-(void)_notifyDelegateOfProgress:(CGFloat)arg0 toForceLevel:(NSInteger)arg1 ;
-(void)dealloc;
-(void)observeTouchWithForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 withCentroidAtLocation:(struct CGPoint )arg2 ;
-(void)receiveObservedValue:(id)arg0 ;
-(void)reset;
-(void)touchForceMultiplierDidChange;


@end


#endif