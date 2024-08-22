// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYSENSORMANAGERLOCALDATASTORE_H
#define HMDAPPLEMEDIAACCESSORYSENSORMANAGERLOCALDATASTORE_H

@class NSUserDefaults;
@protocol HMDAppleMediaAccessorySensorManagerDataStore;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore>



@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults


-(id)init;
-(id)initWithUserDefaults:(id)arg0 ;
-(void)fetchSensorUUIDWithCompletion:(id)arg0 ;
-(void)saveSensorUUID:(id)arg0 ;
-(void)saveSensorUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif