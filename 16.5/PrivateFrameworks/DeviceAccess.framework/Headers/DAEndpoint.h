// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAENDPOINT_H
#define DAENDPOINT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "DADevice.h"

@interface DAEndpoint : NSObject

@property (nonatomic) NSUInteger addTicks; // ivar: _addTicks
@property (copy, nonatomic) NSString *airplayDeviceID; // ivar: _airplayDeviceID
@property (copy, nonatomic) NSString *bonjourFullName; // ivar: _bonjourFullName
@property (copy, nonatomic) NSString *bonjourHostname; // ivar: _bonjourHostname
@property (nonatomic) unsigned int bonjourInterfaceIndex; // ivar: _bonjourInterfaceIndex
@property (copy, nonatomic) NSString *bonjourName; // ivar: _bonjourName
@property (copy, nonatomic) NSString *bonjourType; // ivar: _bonjourType
@property (nonatomic) BOOL grouped; // ivar: _grouped
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *ipv4String; // ivar: _ipv4String
@property (readonly, nonatomic) BOOL missing; // ivar: _missing
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) DADevice *parentDevice; // ivar: _parentDevice
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (copy, nonatomic) NSString *protocolTypeString; // ivar: _protocolTypeString
@property (nonatomic) BOOL selected; // ivar: _selected
@property (copy, nonatomic) DADevice *underlyingDADevice; // ivar: _underlyingDADevice
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)matchesSelectedEndpoint:(id)arg0 allowName:(BOOL)arg1 ;
-(BOOL)sameDeviceAsEndpoint:(id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithPersistentDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)mergeMissingInfoFromEndpoint:(id)arg0 ;
-(void)updateWithEndpoint:(id)arg0 ;


@end


#endif