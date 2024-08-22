// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGS_H
#define HMSETTINGS_H

@protocol HMSettingsDelegate, HMSettingsOwner;

#import <Foundation/Foundation.h>

#import "HMSettingGroup.h"

@interface HMSettings : NSObject

@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) NSObject<HMSettingsDelegate> *delegate;
@property (readonly, weak) NSObject<HMSettingsOwner> *owner; // ivar: _owner
@property (readonly) HMSettingGroup *rootGroup;


-(id)description;
-(id)initWithSettingsOwner:(id)arg0 ;


@end


#endif