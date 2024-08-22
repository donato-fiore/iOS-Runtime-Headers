// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STRESTRICTIONSTOPRESETMAPPINGVIEWMODEL_H
#define STRESTRICTIONSTOPRESETMAPPINGVIEWMODEL_H

@protocol _TtP20ScreenTimeSettingsUI46STRestrictionsToPresetMappingViewModelProtocol_, STContentPrivacyViewModelCoordinator;

#import <Foundation/Foundation.h>


@interface STRestrictionsToPresetMappingViewModel : NSObject <_TtP20ScreenTimeSettingsUI46STRestrictionsToPresetMappingViewModelProtocol_>



@property (retain) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // ivar: _contentPrivacyCoordinator


+(id)boolPresetKeys;
+(id)presetKeys;
-(id)_keyFromRestrictionItem:(id)arg0 ;
-(id)_presetForValuesByRestriction:(id)arg0 ;
-(id)_restrictionsWithValuesByRestriction:(id)arg0 presetKeys:(id)arg1 ;
-(id)initWithContentPrivacyCoordinator:(id)arg0 ;
-(void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(id)arg0 ;


@end


#endif