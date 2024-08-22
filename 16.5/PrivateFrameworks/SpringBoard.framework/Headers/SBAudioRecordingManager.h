// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAUDIORECORDINGMANAGER_H
#define SBAUDIORECORDINGMANAGER_H

@class SBSStatusBarStyleOverridesAssertion;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBAudioRecordingManager : NSObject

@property (readonly, nonatomic) SBApplication *nowRecordingApplication; // ivar: _nowRecordingApplication
@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarStyleOverrideAssertion; // ivar: _statusBarStyleOverrideAssertion


-(BOOL)_callProviderAttributionExistsForAttribution:(id)arg0 callDescriptors:(id)arg1 ;
-(CGFloat)_verificationDelayForApplication:(id)arg0 ;
-(id)init;
-(int)_pidForAttribution:(id)arg0 ;
-(void)_coverSheetDidPresent:(id)arg0 ;
-(void)_removeStatusBarStyleOverrideAssertion;
-(void)_verifyBackgroundAudioActivityForApplication:(id)arg0 withDelay:(BOOL)arg1 ;
-(void)dealloc;
-(void)setNowRecordingAppForActiveAudioRecordingAttributions:(id)arg0 callDescriptors:(id)arg1 ;
-(void)verifyBackgroundAudioActivityForApplication:(id)arg0 ;


@end


#endif