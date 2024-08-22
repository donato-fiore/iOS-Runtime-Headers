// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVAUXILIARYDEVICE_H
#define MPAVAUXILIARYDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPAVAuxiliaryDevice : NSObject

@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(id)otherConnectedDevicesFromRouteDescription:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif