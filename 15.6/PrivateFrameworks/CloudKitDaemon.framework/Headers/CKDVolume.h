// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDVOLUME_H
#define CKDVOLUME_H

@class NSNumber, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface CKDVolume : NSObject

@property (readonly, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) BOOL isRootVolume;
@property (readonly, nonatomic) NSString *mountPath; // ivar: _mountPath
@property (readonly, nonatomic) NSUUID *volumeUUID; // ivar: _volumeUUID


+(id)mountedVolumes;
+(id)volumeForPath:(char *)arg0 ;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithVolumeUUID:(id)arg0 deviceID:(id)arg1 mountToPath:(id)arg2 ;


@end


#endif