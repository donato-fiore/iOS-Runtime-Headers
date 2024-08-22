// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPOWERCHANGEOBSERVER_H
#define CSPOWERCHANGEOBSERVER_H

@protocol NSObject, CSPowerStatusProviding;

#import <Foundation/Foundation.h>


@interface CSPowerChangeObserver : NSObject {
    id<NSObject> *_notificationToken;
    id<CSPowerStatusProviding> *_statusProvider;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic, getter=isConnectedToPower) BOOL connectedToPower; // ivar: _connectedToPower
@property (nonatomic) BOOL isConnectedToQiPower; // ivar: _isConnectedToQiPower
@property (nonatomic) BOOL isConnectedToWirelessInternalCharger; // ivar: _isConnectedToWirelessInternalCharger
@property (nonatomic) BOOL isConnectedToWirelessInternalChargingAccessory; // ivar: _isConnectedToWirelessInternalChargingAccessory


-(id)initWithStatusProvider:(id)arg0 notificationName:(id)arg1 updateBlock:(id)arg2 ;
-(void)dealloc;
-(void)setIsConnectedToPower:(BOOL)arg0 ;
-(void)update;


@end


#endif