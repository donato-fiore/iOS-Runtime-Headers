// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEVICEMANAGER_H
#define HDDEVICEMANAGER_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDDeviceManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
    NSNumber *_noneDeviceID;
}




-(id)allDevicesWithError:(*id)arg0 ;
-(id)currentDeviceEntityWithError:(*id)arg0 ;
-(id)deviceEntitiesForDevice:(id)arg0 error:(*id)arg1 ;
-(id)deviceEntitiesWithProperty:(id)arg0 matchingValues:(id)arg1 error:(*id)arg2 ;
-(id)deviceEntityForDevice:(id)arg0 error:(*id)arg1 ;
-(id)deviceEntityForNoDeviceWithError:(*id)arg0 ;
-(id)deviceForPersistentID:(id)arg0 error:(*id)arg1 ;
-(id)devicesWithProperty:(id)arg0 matchingValues:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;


@end


#endif