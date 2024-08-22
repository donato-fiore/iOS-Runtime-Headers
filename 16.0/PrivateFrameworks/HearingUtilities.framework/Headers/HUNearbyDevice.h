// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNEARBYDEVICE_H
#define HUNEARBYDEVICE_H

@class NSString, IDSDevice, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HUNearbyDevice : NSObject

@property (retain, nonatomic) NSString *identifierWithoutDevice; // ivar: _identifierWithoutDevice
@property (retain, nonatomic) IDSDevice *idsDevice; // ivar: _idsDevice
@property (retain, nonatomic) NSMutableArray *registeredDomains; // ivar: _registeredDomains
@property (retain, nonatomic) NSMutableDictionary *state; // ivar: _state
@property (retain, nonatomic) NSMutableArray *updateDomains; // ivar: _updateDomains


+(id)nearbyDeviceWithIDSDevice:(id)arg0 ;
+(id)nearbyDeviceWithIDSIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)representsAWatch;
-(id)description;
-(id)identifier;
-(id)initWithIDSDevice:(id)arg0 ;
-(id)initWithIDSIdentifier:(id)arg0 ;
-(id)name;
-(id)stateForDomain:(id)arg0 ;


@end


#endif