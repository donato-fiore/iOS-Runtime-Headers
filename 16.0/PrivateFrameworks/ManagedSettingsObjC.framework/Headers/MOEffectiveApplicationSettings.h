// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEFFECTIVEAPPLICATIONSETTINGS_H
#define MOEFFECTIVEAPPLICATIONSETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveArray.h"
#import "MOEffectiveBool.h"

@interface MOEffectiveApplicationSettings : NSObject

@property (readonly) MOEffectiveArray *blockedApplications;
@property (readonly) MOEffectiveBool *denyAppInstallation;
@property (readonly) MOEffectiveBool *denyAppRemoval;
@property (readonly) MOEffectiveArray *unremovableApplications;


+(id)xpcConnection;
+(void)askToOverrideUnremovabilityOfApplication:(id)arg0 teamIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif