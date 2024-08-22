// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSCLOUDCHANNELCONFIG_H
#define DRSCLOUDCHANNELCONFIG_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface DRSCloudChannelConfig : NSObject

@property (readonly, nonatomic) BOOL allowsWildcardBuild;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) unsigned char environment; // ivar: _environment
@property (readonly, nonatomic) BOOL isNoSubscriptionConfig;
@property (readonly, nonatomic) BOOL overridesDeviceDefault; // ivar: _overridesDeviceDefault
@property (readonly, nonatomic) unsigned char platform; // ivar: _platform
@property (readonly, nonatomic) NSNumber *populationSliceNumber; // ivar: _populationSliceNumber
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)_iOSSliceCountDict;
+(id)_macOSSliceCountDict;
+(id)_smallPopulationCountDict;
+(id)_tvOSSliceCountDict;
+(id)_watchOSSliceCountDict;
+(id)channelIDForName:(id)arg0 ;
+(id)channelNameForPlatform:(unsigned char)arg0 type:(unsigned char)arg1 sliceNum:(id)arg2 ;
+(id)currentDeviceDefaultCloudChannelConfig;
+(id)sliceCountForPlatform:(unsigned char)arg0 channelType:(unsigned char)arg1 ;
+(id)staticSnapshotDeviceDefaultCloudChannelConfig;
+(id)stringForChannelType:(unsigned char)arg0 ;
+(id)stringForEnvironment:(unsigned char)arg0 ;
+(unsigned char)channelTypeForIsInternal:(BOOL)arg0 isSeed:(BOOL)arg1 isQA:(BOOL)arg2 isCarrier:(BOOL)arg3 ;
+(unsigned short)populationSliceForDevice:(unsigned short)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)initNoChecksWithPlatform:(unsigned char)arg0 channelType:(unsigned char)arg1 environment:(unsigned char)arg2 populationSliceNumber:(id)arg3 overridesDeviceDefault:(BOOL)arg4 ;
-(id)initNoSubscriptionConfig:(BOOL)arg0 ;
-(id)initWithMO:(id)arg0 ;
-(id)initWithValidPlatform:(unsigned char)arg0 channelType:(unsigned char)arg1 environment:(unsigned char)arg2 populationSliceNumber:(id)arg3 overridesDeviceDefault:(BOOL)arg4 ;
-(id)jsonDictionaryRepresentation;


@end


#endif