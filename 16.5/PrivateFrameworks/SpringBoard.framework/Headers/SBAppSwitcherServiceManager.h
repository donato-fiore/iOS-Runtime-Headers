// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERSERVICEMANAGER_H
#define SBAPPSWITCHERSERVICEMANAGER_H


#import <Foundation/Foundation.h>

#import "SBAppSwitcherServiceSet.h"

@interface SBAppSwitcherServiceManager : NSObject {
    SBAppSwitcherServiceSet *_services;
}




+(id)sharedInstance;
-(id)registeredServicesSnapshot;
-(void)registerService:(id)arg0 ;
-(void)unregisterService:(id)arg0 ;


@end


#endif