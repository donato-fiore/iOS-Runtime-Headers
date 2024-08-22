// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVDISTANTEXTERNALDEVICEFACTORY_H
#define MRAVDISTANTEXTERNALDEVICEFACTORY_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MRAVDistantExternalDeviceFactory : NSObject {
    NSMutableDictionary *_distantExternalDevices;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *externalDevices;


-(id)_withLock_createDistantExternalDeviceForEndpoint:(id)arg0 ;
-(id)description;
-(id)distantExternaDeviceForEndpoint:(id)arg0 ;
-(id)init;
-(void)_withLock_purgeCache;


@end


#endif