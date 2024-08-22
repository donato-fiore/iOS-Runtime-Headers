// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCBLEPAIRINGACCESSORY_H
#define ACCBLEPAIRINGACCESSORY_H

@class NSDictionary, NSString, NSData;

#import <Foundation/Foundation.h>


@interface ACCBLEPairingAccessory : NSObject

@property (retain, nonatomic) NSDictionary *accInfo; // ivar: _accInfo
@property (retain, nonatomic) NSString *accessoryUID; // ivar: _accessoryUID
@property (retain, nonatomic) NSData *blePairingUUID; // ivar: _blePairingUUID
@property (nonatomic) BOOL desiredBLEPairingState; // ivar: _desiredBLEPairingState


-(id)initWithAccessoryUID:(id)arg0 blePairingUUID:(id)arg1 andAccInfo:(id)arg2 ;


@end


#endif