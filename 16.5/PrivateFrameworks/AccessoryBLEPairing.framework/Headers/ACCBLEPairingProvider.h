// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCBLEPAIRINGPROVIDER_H
#define ACCBLEPAIRINGPROVIDER_H

@class NSString;
@protocol ACCBLEPairingProviderProtocol;

#import <Foundation/Foundation.h>


@interface ACCBLEPairingProvider : NSObject

@property (weak, nonatomic) NSObject<ACCBLEPairingProviderProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *delegateUUID; // ivar: _delegateUUID
@property (nonatomic) int lastScorpiusDetectType;


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)devicePairingData:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 pairData:(id)arg3 ;
-(void)deviceStateUpdate:(id)arg0 blePairingUUID:(id)arg1 bRadioOn:(BOOL)arg2 pairState:(int)arg3 bPairModeOn:(BOOL)arg4 ;
-(void)deviceUpdatePairingInfo:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3 ;
-(void)startBLEUpdates:(id)arg0 blePairingUUID:(id)arg1 pairType:(int)arg2 bRadioUpdatesOn:(BOOL)arg3 bPairInfoUpdatesOn:(BOOL)arg4 ;
-(void)stopBLEUpdates:(id)arg0 blePairingUUID:(id)arg1 ;


@end


#endif