// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVMUTABLEDISTANTEXTERNALDEVICEMETADATA_H
#define MRAVMUTABLEDISTANTEXTERNALDEVICEMETADATA_H

@class NSString;


#import "MRAVDistantExternalDeviceMetadata.h"
#import "MRDeviceInfo.h"
#import "MRSupportedProtocolMessages.h"

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (copy, nonatomic) NSString *hostName;
@property (nonatomic) NSInteger hostPort;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic) BOOL usingSystemPairing;




@end


#endif