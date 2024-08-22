// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCORNERFINGERPANGESTURESETTINGS_H
#define SBCORNERFINGERPANGESTURESETTINGS_H

@class PTSettings;



@interface SBCornerFingerPanGestureSettings : PTSettings

@property (nonatomic) NSUInteger tuning; // ivar: _tuning


+(id)settingsControllerModule;
-(*CGFloat)angleDegreesAscendingLUT:(BOOL)arg0 ;
-(*CGFloat)distanceMillimetersValues:(BOOL)arg0 ;
-(CGFloat)maximumActiveDistance:(BOOL)arg0 ;
-(NSUInteger)vectorCount:(BOOL)arg0 ;
-(void)setDefaultValues;


@end


#endif