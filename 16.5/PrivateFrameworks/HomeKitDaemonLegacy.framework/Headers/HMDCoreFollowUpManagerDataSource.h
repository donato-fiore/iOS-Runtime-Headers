// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREFOLLOWUPMANAGERDATASOURCE_H
#define HMDCOREFOLLOWUPMANAGERDATASOURCE_H

@protocol HMDCoreFollowUpManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDCoreFollowUpManagerDataSource : NSObject <HMDCoreFollowUpManagerDataSource>





-(BOOL)currentDeviceIsAnAppleTV;
-(BOOL)currentDeviceSupportsDeviceSetup;
-(id)followUpActionForDeviceSetupManager:(id)arg0 ;
-(id)followUpControllerForDeviceSetupManager:(id)arg0 ;
-(id)followUpItemForDeviceSetupManager:(id)arg0 ;
-(id)followUpPreferencesBundleIdentifierForDeviceSetupManager:(id)arg0 ;


@end


#endif