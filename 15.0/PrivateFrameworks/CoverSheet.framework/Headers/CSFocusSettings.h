// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSFOCUSSETTINGS_H
#define CSFOCUSSETTINGS_H

@class PTSettings;



@interface CSFocusSettings : PTSettings

@property (nonatomic) BOOL gatesOnControlCenterAccess; // ivar: _gatesOnControlCenterAccess
@property (nonatomic) BOOL requiresAuthWithoutControlCenterAccess; // ivar: _requiresAuthWithoutControlCenterAccess


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif