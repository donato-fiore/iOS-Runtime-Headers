// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSCLOUDCHANNELCONFIGMO_H
#define DRSCLOUDCHANNELCONFIGMO_H

@class NSManagedObject, NSNumber;



@interface DRSCloudChannelConfigMO : NSManagedObject

@property (nonatomic) short channelType;
@property (nonatomic) short environment;
@property (nonatomic) BOOL overridesDeviceDefault;
@property (nonatomic) short platform;
@property (copy, nonatomic) NSNumber *populationSliceNumber;


+(id)fetchRequest;


@end


#endif