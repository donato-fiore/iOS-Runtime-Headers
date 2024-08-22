// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSCASTINGCONTROLLER_H
#define _UIFOCUSCASTINGCONTROLLER_H

@protocol _UIFocusCastingControllerDelegate;

#import <Foundation/Foundation.h>


@interface _UIFocusCastingController : NSObject

@property (weak, nonatomic) NSObject<_UIFocusCastingControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger entryPointAxis; // ivar: _entryPointAxis
@property (nonatomic) CGFloat entryPointMemorizationTimeout; // ivar: _entryPointMemorizationTimeout
@property (nonatomic) BOOL isRememberingEntryPoint; // ivar: _isRememberingEntryPoint
@property (nonatomic) CGPoint screenEntryPoint; // ivar: _screenEntryPoint


-(NSUInteger)_axisForHeading:(NSUInteger)arg0 ;
-(id)_focusEffectsControllerForFocusedItem;
-(id)init;
-(struct CGPoint )_castingPointInGlobalFrame:(struct CGRect )arg0 forHeading:(NSUInteger)arg1 ;
-(struct CGPoint )_entryPointInGlobalFrame:(struct CGRect )arg0 forHeading:(NSUInteger)arg1 ;
-(struct CGPoint )_movementPointInGlobalFrame:(struct CGRect )arg0 ;
-(struct CGRect )castingFrameForFocusedGlobalFrame:(struct CGRect )arg0 heading:(NSUInteger)arg1 ;
-(void)_startRememberingEntryPoint;
-(void)_stopRememberingEntryPoint;
-(void)_updateFocusFromItem:(id)arg0 toItem:(id)arg1 withHeading:(NSUInteger)arg2 ;
-(void)_updateFocusItemFromGlobalFrame:(struct CGRect )arg0 toGlobalFrame:(struct CGRect )arg1 withHeading:(NSUInteger)arg2 ;
-(void)forgetEntryPoint;
-(void)teardown;
-(void)updateFocusCastingWithContext:(id)arg0 ;


@end


#endif