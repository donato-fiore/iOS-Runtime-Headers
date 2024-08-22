// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBTLEADVERTISEMENTMANAGER_H
#define AMSBTLEADVERTISEMENTMANAGER_H

@class CBPeripheralManager, NSString;
@protocol CBPeripheralManagerDelegate;

#import <Foundation/Foundation.h>


@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate>

 {
    CBPeripheralManager *peripheralManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAdvertising;
-(BOOL)isLECapableHardware;
-(id)init;
-(void)advertiseMIDIService;
-(void)dealloc;
-(void)peripheralManager:(id)arg0 didReceiveReadRequest:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg0 error:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg0 ;
-(void)stopAdvertisingMIDIService;


@end


#endif