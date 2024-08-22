// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYSENSORMANAGERDATASTORE_H
#define HMDAPPLEMEDIAACCESSORYSENSORMANAGERDATASTORE_H

@class NSManagedObjectContext;
@protocol HMDAppleMediaAccessorySensorManagerDataStore;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessorySensorManagerDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore>

 {
    NSManagedObjectContext *_localMOC;
}




-(id)initWithLocalMOC:(id)arg0 ;
-(void)fetchSensorUUIDWithCompletion:(id)arg0 ;
-(void)saveSensorUUID:(id)arg0 ;
-(void)saveSensorUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif