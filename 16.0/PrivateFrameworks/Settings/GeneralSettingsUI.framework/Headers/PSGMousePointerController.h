// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGMOUSEPOINTERCONTROLLER_H
#define PSGMOUSEPOINTERCONTROLLER_H

@class NSString, NSMutableSet;
@protocol BKSMousePointerDeviceObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PSGMousePointerController : NSObject <BKSMousePointerDeviceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<BSInvalidatable> *observerToken; // ivar: _observerToken
@property (retain, nonatomic) NSMutableSet *pointerDevices; // ivar: _pointerDevices
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasMagicMouse;
-(BOOL)hasMouse;
-(BOOL)hasTrackpad;
-(id)globalDevicePreferences;
-(id)init;
-(int)trackingSpeedIndex;
-(void)mousePointerDevicesDidConnect:(id)arg0 ;
-(void)mousePointerDevicesDidDisconnect:(id)arg0 ;
-(void)setGlobalDevicePreferences:(id)arg0 ;
-(void)setTrackingSpeedIndex:(int)arg0 ;


@end


#endif