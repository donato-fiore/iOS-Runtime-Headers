// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEFFECTIVEUSERSETTINGS_H
#define MOEFFECTIVEUSERSETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveBool.h"
#import "MOEffectiveString.h"

@interface MOEffectiveUserSettings : NSObject

@property (readonly) MOEffectiveBool *denySharing;
@property (readonly) MOEffectiveBool *denyUnrestrictedSharing;
@property (readonly) MOEffectiveString *sharingPolicy;




@end


#endif