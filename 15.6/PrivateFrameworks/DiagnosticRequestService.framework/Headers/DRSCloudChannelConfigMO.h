// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCLOUDCHANNELCONFIGMO_H
#define DRSCLOUDCHANNELCONFIGMO_H

@class NSManagedObject;



@interface DRSCloudChannelConfigMO : NSManagedObject

@property (nonatomic) short channelType;
@property (nonatomic) short environment;
@property (nonatomic) BOOL overridesDeviceDefault;
@property (nonatomic) short platform;


+(id)fetchRequest;


@end


#endif