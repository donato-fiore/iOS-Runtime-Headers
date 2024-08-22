// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSHARINGDEVICE_H
#define CATSHARINGDEVICE_H

@class NSDate, NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface CATSharingDevice : NSObject

@property (readonly, nonatomic) NSInteger RSSI; // ivar: _RSSI
@property (readonly, nonatomic) NSDate *detectionTime; // ivar: _detectionTime
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (readonly, nonatomic) NSUInteger pairingState; // ivar: _pairingState


+(id)unlocalizedDescriptivePairingStateForPairingState:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg0 modelIdentifier:(id)arg1 RSSI:(NSInteger)arg2 paired:(BOOL)arg3 pairingState:(NSUInteger)arg4 detectionTime:(id)arg5 ;


@end


#endif