// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKVEHICLECONNECTIONSESSION_H
#define PKVEHICLECONNECTIONSESSION_H

@class NSString;
@protocol PKPassLibraryDelegate, PKVehicleConnectionDelegate;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"
#import "PKAssertion.h"

@interface PKVehicleConnectionSession : NSObject <PKPassLibraryDelegate>

 {
    PKPassLibrary *_passLibrary;
    NSString *_sessionIdentifier;
    PKAssertion *_assertion;
}


@property (readonly, nonatomic) NSInteger connectionStatus; // ivar: _connectionStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKVehicleConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)sessionForPass:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;
-(BOOL)sendData:(id)arg0 error:(*id)arg1 ;
-(id)_initWithDelegate:(id)arg0 sessionIdentifier:(id)arg1 passLibrary:(id)arg2 assertion:(id)arg3 ;
-(id)init;
-(id)new;
-(void)_updateConnectionState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)passLibraryReceivedInterruption;
-(void)vehicleConnectionDidRecievePassthroughData:(id)arg0 ;
-(void)vehicleConnectionDidUpdateConnectionState:(NSInteger)arg0 ;


@end


#endif