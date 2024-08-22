// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVISOOUTPUTSETTINGSVALIDATOR_H
#define AVISOOUTPUTSETTINGSVALIDATOR_H



#import "AVMediaFileOutputSettingsValidator.h"

@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator



-(BOOL)validateAudioOutputSettings:(id)arg0 reason:(*id)arg1 ;
-(BOOL)validateVideoOutputSettings:(id)arg0 reason:(*id)arg1 ;


@end


#endif