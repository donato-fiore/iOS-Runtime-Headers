// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEDRIVERSERVICECONNECTION_H
#define _GCDEVICEDRIVERSERVICECONNECTION_H

@class NSArray;
@protocol _GCDeviceDriverConnection;

#import <Foundation/Foundation.h>


@interface _GCDeviceDriverServiceConnection : NSObject {
    id<_GCDeviceDriverConnection> *_driverConnection;
    id *_driverConnectionInterruptionObserver;
    id *_driverConnectionInvalidationObserver;
    id *_serviceVendor;
    uint8_t _invalid;
    NSArray *_invalidationHandlers;
}


@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;


+(id)connectionToServiceInDriver:(id)arg0 withClient:(id)arg1 ;
+(id)serviceProtocol;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)initWithDriverConnection:(id)arg0 serviceVendor:(id)arg1 ;
-(id)serviceVendorRequestWithHandler:(id)arg0 ;
-(id)serviceVendorRequestWithLabel:(id)arg0 handler:(id)arg1 ;
-(void)scheduleSendBarrierBlock:(id)arg0 ;


@end


#endif