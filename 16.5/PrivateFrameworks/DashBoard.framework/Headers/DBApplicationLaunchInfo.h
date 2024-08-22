// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBAPPLICATIONLAUNCHINFO_H
#define DBAPPLICATIONLAUNCHINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "DBApplicationInfo.h"

@interface DBApplicationLaunchInfo : NSObject

@property (readonly, nonatomic) NSDictionary *activationSettings; // ivar: _activationSettings
@property (readonly, nonatomic) DBApplicationInfo *application; // ivar: _application


+(id)launchInfoForApplication:(id)arg0 ;
+(id)launchInfoForApplication:(id)arg0 withActivationSettings:(id)arg1 ;
-(id)initWithApplication:(id)arg0 activationSettings:(id)arg1 ;


@end


#endif