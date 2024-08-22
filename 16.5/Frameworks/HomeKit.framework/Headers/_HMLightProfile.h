// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMLIGHTPROFILE_H
#define _HMLIGHTPROFILE_H



#import "HMAccessoryProfile.h"
#import "HMLightProfile.h"
#import "HMLightProfileSettings.h"

@interface _HMLightProfile : HMAccessoryProfile

@property (readonly) HMLightProfile *lightProfile;
@property (retain) HMLightProfileSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 services:(id)arg1 settings:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)handleSettingsDidUpdate:(id)arg0 ;


@end


#endif