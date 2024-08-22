// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGMOVEMENTCADENCESETTINGS_H
#define _UIDRAGMOVEMENTCADENCESETTINGS_H


#import <Foundation/Foundation.h>


@interface _UIDragMovementCadenceSettings : NSObject

@property (nonatomic) CGFloat dwellTimeThreshold; // ivar: _dwellTimeThreshold
@property (nonatomic) CGFloat velocityMagnitudeThreshold; // ivar: _velocityMagnitudeThreshold


+(id)defaultSettingsForMovementPhase:(NSInteger)arg0 cadence:(NSInteger)arg1 ;
-(id)initWithMovementPhase:(NSInteger)arg0 cadence:(NSInteger)arg1 ;
-(id)initWithVelocityMagnitudeThreshold:(CGFloat)arg0 dwellTimeThreshold:(CGFloat)arg1 ;
-(void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(NSInteger)arg0 ;
-(void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(NSInteger)arg0 ;
-(void)_applyImmediateSettings;
-(void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(NSInteger)arg0 ;
-(void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(NSInteger)arg0 ;


@end


#endif