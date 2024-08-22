// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNANOSYNCPAIREDDEVICESSNAPSHOT_H
#define HKNANOSYNCPAIREDDEVICESSNAPSHOT_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKNanoSyncPairedDeviceInfo.h"

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding>

 {
    HKNanoSyncPairedDeviceInfo *_activeDeviceInfo;
    NSSet *_allDeviceInfos;
}


@property (readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
@property (readonly, copy) NSSet *allDeviceInfos;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceInfoForSourceBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairedDeviceInfos:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif