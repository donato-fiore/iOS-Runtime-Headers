// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUMFIDEVICEDISCOVERY_H
#define CUMFIDEVICEDISCOVERY_H

@class EAAccessoryManager, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUMFiDeviceDiscovery : NSObject {
    EAAccessoryManager *_eaManager;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label


-(id)init;
-(void)_activate;
-(void)_eaAccessoryDidConnect:(id)arg0 ;
-(void)_eaAccessoryDidDisconnect:(id)arg0 ;
-(void)_invalidate;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif