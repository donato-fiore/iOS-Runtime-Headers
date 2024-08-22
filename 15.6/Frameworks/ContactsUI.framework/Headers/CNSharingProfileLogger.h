// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILELOGGER_H
#define CNSHARINGPROFILELOGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CNSharingProfileLogger : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(id)init;
-(void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg0 ;
-(void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg0 ;
-(void)logOnboardingErrorSavingContactWithDescription:(id)arg0 ;
-(void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg0 ;
-(void)logOnboardingErrorSettingMeContactWithDescription:(id)arg0 ;
-(void)logOnboardingReturningSharingResultWithDescription:(id)arg0 ;
-(void)logOnboardingSavingContact:(id)arg0 ;
-(void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg0 ;
-(void)logOnboardingUpdatingContactWithIdentifier:(id)arg0 ;
-(void)logSettingsErrorSavingContactWithDescription:(id)arg0 ;
-(void)logSettingsErrorSettingMeContactWithDescription:(id)arg0 ;
-(void)logSettingsReturningSharingResultWithDescription:(id)arg0 ;
-(void)logSettingsSavingContact:(id)arg0 ;


@end


#endif