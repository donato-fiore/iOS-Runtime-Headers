// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCONTEXTDONATIONSERVICE_H
#define AFCONTEXTDONATIONSERVICE_H

@class NSMapTable, NSString;
@protocol AFDeviceContextConnectionDelegate, AFContextDonation, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFDeviceContextConnection.h"

@interface AFContextDonationService : NSObject <AFDeviceContextConnectionDelegate, AFContextDonation>

 {
    NSMapTable *_transformersByType;
    AFDeviceContextConnection *_connection;
    id<AFContextDonation> *_donationService;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
-(id)_connection;
-(id)_init;
-(void)deviceContextConnectionDidInvalidate:(id)arg0 ;
-(void)donateContext:(id)arg0 withMetadata:(id)arg1 pushToRemote:(BOOL)arg2 ;
-(void)donateContext:(id)arg0 withMetadata:(id)arg1 pushToRemote:(BOOL)arg2 completion:(id)arg3 ;
-(void)registerContextTransformer:(id)arg0 forType:(id)arg1 ;
-(void)setDonationService:(id)arg0 ;


@end


#endif