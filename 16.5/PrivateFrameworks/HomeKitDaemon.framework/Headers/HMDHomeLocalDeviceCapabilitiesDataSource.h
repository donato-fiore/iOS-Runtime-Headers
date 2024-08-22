// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMELOCALDEVICECAPABILITIESDATASOURCE_H
#define HMDHOMELOCALDEVICECAPABILITIESDATASOURCE_H

@class NSString;
@protocol HMDHomeLocalDeviceCapabilitiesDataSource;

#import <Foundation/Foundation.h>


@interface HMDHomeLocalDeviceCapabilitiesDataSource : NSObject <HMDHomeLocalDeviceCapabilitiesDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isCompanionCapable;
@property (readonly) BOOL isResidentCapable;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAddingAccessory;
@property (readonly) BOOL supportsBulletinBoard;
@property (readonly) BOOL supportsHomeInvitation;
@property (readonly) BOOL supportsHomeKitDataStream;
@property (readonly) BOOL supportsRemoteAccess;
@property (readonly) BOOL supportsSiriUnsecuringActionsWithNoPasscode;
@property (readonly) BOOL supportsSiriUnsecuringActionsWithWatchAuth;




@end


#endif