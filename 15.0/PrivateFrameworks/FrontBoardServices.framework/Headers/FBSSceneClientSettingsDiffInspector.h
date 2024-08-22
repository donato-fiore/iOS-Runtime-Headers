// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSCENECLIENTSETTINGSDIFFINSPECTOR_H
#define FBSSCENECLIENTSETTINGSDIFFINSPECTOR_H



#import "FBSSettingsDiffInspector.h"

@interface FBSSceneClientSettingsDiffInspector : FBSSettingsDiffInspector



-(void)observeClassWithBlock:(id)arg0 ;
-(void)observeLayersWithBlock:(id)arg0 ;
-(void)observeOcclusionsWithBlock:(id)arg0 ;
-(void)observePreferredInterfaceOrientationWithBlock:(id)arg0 ;
-(void)observePreferredLevelWithBlock:(id)arg0 ;
-(void)observePreferredSceneHostIdentifierWithBlock:(id)arg0 ;
-(void)observePreferredSceneHostIdentityWithBlock:(id)arg0 ;


@end


#endif