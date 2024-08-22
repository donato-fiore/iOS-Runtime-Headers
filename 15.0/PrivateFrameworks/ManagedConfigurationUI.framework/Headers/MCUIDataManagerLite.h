// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIDATAMANAGERLITE_H
#define MCUIDATAMANAGERLITE_H

@class NSString;
@protocol MCUIDataManagerProtocol;

#import <Foundation/Foundation.h>


@interface MCUIDataManagerLite : NSObject <MCUIDataManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDeviceManagementHidden;
-(void)allDeviceManagementOutMDMProfileInfo:(*id)arg0 outConfigurationProfilesInfo:(*id)arg1 outUninstalledProfilesInfo:(*id)arg2 outEnterpriseAppSigners:(*id)arg3 outFreeDevAppSigners:(*id)arg4 outBlockedApplications:(*id)arg5 ;


@end


#endif