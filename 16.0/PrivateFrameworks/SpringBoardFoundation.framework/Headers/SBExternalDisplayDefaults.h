// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALDISPLAYDEFAULTS_H
#define SBEXTERNALDISPLAYDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBExternalDisplayDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL allowWirelessDisplaysForExtendedDisplayMode;
@property (nonatomic) unsigned int arrangementEdge;
@property (nonatomic) CGFloat arrangementOffset;
@property (nonatomic) CGFloat contentsScale;
@property (retain, nonatomic) NSDictionary *displayModeSettingsMap;
@property (nonatomic) BOOL extendedDisplayEverEnabledWithHardwareReqsSatisfied;
@property (nonatomic) BOOL extendedDisplayEverEnabledWithoutHardwareReqsSatisfied;
@property (nonatomic, getter=isMirroringEnabled) BOOL mirroringEnabled;


-(BOOL)hasShownAllExtendedDisplayEducations;
-(id)_constructDisplaySettingsMap;
-(id)description;
-(id)displayModeSettingsForDisplay:(id)arg0 ;
-(id)observeDisplayModeSettingsOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)_bindAndRegisterDefaults;
-(void)_saveDisplaySettingsMapToStore:(id)arg0 ;
-(void)resetPrototypeSettingAdjustableDefaults;
-(void)setDisplayModeSettings:(id)arg0 forDisplaysMatchingPredicates:(id)arg1 ;


@end


#endif