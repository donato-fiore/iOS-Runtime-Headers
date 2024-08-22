// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONFIGXPCSERVICESERVICECONNECTION_H
#define GCCONFIGXPCSERVICESERVICECONNECTION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GCConfigXPCServiceConnection.h"

@interface GCConfigXPCServiceServiceConnection : NSObject {
    GCConfigXPCServiceConnection *_rootConnection;
    id *_rootConnectionInterruptionObserver;
    id *_rootConnectionInvalidationObserver;
    id *_serviceVendor;
    uint8_t _invalid;
    NSArray *_invalidationHandlers;
}


@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;


+(id)connection:(id)arg0 withClient:(id)arg1 ;
+(id)serviceProtocol;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)initWithConnection:(id)arg0 serviceVendor:(id)arg1 ;
-(id)serviceVendorRequestWithHandler:(id)arg0 ;
-(id)serviceVendorRequestWithLabel:(id)arg0 handler:(id)arg1 ;
-(void)scheduleSendBarrierBlock:(id)arg0 ;


@end


#endif