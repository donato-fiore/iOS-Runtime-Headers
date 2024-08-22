// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOEFFECTIVEALLOWEDCLIENTSETTINGS_H
#define MOEFFECTIVEALLOWEDCLIENTSETTINGS_H


#import <Foundation/Foundation.h>

#import "MOEffectiveOptionalApplication.h"
#import "MOEffectiveBool.h"
#import "MOEffectiveArray.h"

@interface MOEffectiveAllowedClientSettings : NSObject

@property (readonly) MOEffectiveOptionalApplication *allowedClient;
@property (readonly) MOEffectiveBool *denyMDMEnrollment;
@property (readonly) MOEffectiveArray *tokenKeys;




@end


#endif