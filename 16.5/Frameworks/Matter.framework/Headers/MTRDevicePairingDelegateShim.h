// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICEPAIRINGDELEGATESHIM_H
#define MTRDEVICEPAIRINGDELEGATESHIM_H

@class NSString;
@protocol MTRDeviceControllerDelegate, MTRDevicePairingDelegate;

#import <Foundation/Foundation.h>


@interface MTRDevicePairingDelegateShim : NSObject <MTRDeviceControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<MTRDevicePairingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)controller:(id)arg0 commissioningComplete:(id)arg1 ;
-(void)controller:(id)arg0 commissioningSessionEstablishmentDone:(id)arg1 ;
-(void)controller:(id)arg0 statusUpdate:(NSInteger)arg1 ;
-(void)onPairingDeleted:(id)arg0 ;


@end


#endif