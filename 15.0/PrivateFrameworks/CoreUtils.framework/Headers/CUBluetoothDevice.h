// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUBLUETOOTHDEVICE_H
#define CUBLUETOOTHDEVICE_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface CUBluetoothDevice : NSObject

@property (nonatomic) ? address; // ivar: _address
@property (copy) NSString *addressString; // ivar: _addressString
@property (nonatomic) int colorCode; // ivar: _colorCode
@property (nonatomic) unsigned int connectedServices; // ivar: _connectedServices
@property (nonatomic) unsigned int deviceFlags; // ivar: _deviceFlags
@property (nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (nonatomic) int disconnectReason; // ivar: _disconnectReason
@property (copy) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL magicPaired; // ivar: _magicPaired
@property (copy) NSString *manufacturer; // ivar: _manufacturer
@property (copy) NSString *modelNumber; // ivar: _modelNumber
@property (copy) NSString *name; // ivar: _name
@property (nonatomic) BOOL present; // ivar: _present
@property (nonatomic) int primaryPlacement; // ivar: _primaryPlacement
@property (nonatomic) unsigned int productIdentifier; // ivar: _productIdentifier
@property (nonatomic) int secondaryPlacement; // ivar: _secondaryPlacement
@property (nonatomic) int streamState; // ivar: _streamState
@property (nonatomic) BOOL supportsAACPService; // ivar: _supportsAACPService
@property (nonatomic) unsigned int versionID; // ivar: _versionID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;


@end


#endif