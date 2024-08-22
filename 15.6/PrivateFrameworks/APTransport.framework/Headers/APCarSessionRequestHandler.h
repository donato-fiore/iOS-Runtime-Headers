// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APCARSESSIONREQUESTHANDLER_H
#define APCARSESSIONREQUESTHANDLER_H

@class CARSessionRequestAgent, NSString;
@protocol CARSessionRequestHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APCarSessionRequestHandler : NSObject <CARSessionRequestHandling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *__CFSet _carPlayHelpers;
    CARSessionRequestAgent *_agent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_startAdvertisingCarPlayControlForUSB;
-(void)_startAdvertisingCarPlayControlForWiFiUUID:(id)arg0 ;
-(void)addCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper *)arg0 ;
-(void)cancelRequests;
-(void)checkCarPlayControlAdvertisingForUSB;
-(void)checkCarPlayControlAdvertisingForWiFiUUID:(id)arg0 ;
-(void)dealloc;
-(void)prepareForRemovingWiFiUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper *)arg0 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg0 ;
-(void)startSessionWithHost:(id)arg0 completion:(id)arg1 ;
-(void)stoppedSessionForHostIdentifier:(id)arg0 ;


@end


#endif