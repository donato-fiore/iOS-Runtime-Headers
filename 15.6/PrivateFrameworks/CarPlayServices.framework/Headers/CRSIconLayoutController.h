// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSICONLAYOUTCONTROLLER_H
#define CRSICONLAYOUTCONTROLLER_H

@class BSServiceConnection, NSString;
@protocol CRSIconLayoutServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRSIconLayoutController : NSObject <CRSIconLayoutServerToClientInterface>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)exportIconStateForCertificateSerial:(id)arg0 categories:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchApplicationIconInformationForBundleIdentifier:(id)arg0 vehicleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchIconStateForVehicleID:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)resetIconStateForVehicleID:(id)arg0 ;
-(void)setIconOrder:(id)arg0 hiddenIcons:(id)arg1 forVehicleID:(id)arg2 ;


@end


#endif