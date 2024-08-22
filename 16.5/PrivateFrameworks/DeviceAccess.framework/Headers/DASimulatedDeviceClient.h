// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASIMULATEDDEVICECLIENT_H
#define DASIMULATEDDEVICECLIENT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DASimulatedDeviceClient : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (copy, nonatomic) NSString *deviceBonjourServiceType; // ivar: _deviceBonjourServiceType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_invalidated;
-(void)activate;
-(void)invalidate;


@end


#endif