// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICESETUPMANAGERDATASOURCE_H
#define HMDDEVICESETUPMANAGERDATASOURCE_H

@protocol HMDDeviceSetupManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDDeviceSetupManagerDataSource : NSObject <HMDDeviceSetupManagerDataSource>





-(BOOL)currentDeviceIsAnAppleTV;
-(BOOL)currentDeviceSupportsDeviceSetup;
-(id)followUpActionForDeviceSetupManager:(id)arg0 ;
-(id)followUpControllerForDeviceSetupManager:(id)arg0 ;
-(id)followUpItemForDeviceSetupManager:(id)arg0 ;
-(id)followUpPreferencesBundleIdentifierForDeviceSetupManager:(id)arg0 ;


@end


#endif