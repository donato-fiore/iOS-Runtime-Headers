// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASIMULATEDDEVICESERVER_H
#define DASIMULATEDDEVICESERVER_H

@class CUBonjourAdvertiser, NSMutableSet, CUTCPServer, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DASimulatedDeviceServer : NSObject {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableSet *_tcpConnections;
    CUTCPServer *_tcpServer;
}


@property (copy, nonatomic) NSString *deviceBonjourServiceType; // ivar: _deviceBonjourServiceType
@property (copy, nonatomic) NSString *deviceIdentitifer; // ivar: _deviceIdentitifer
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activate;
-(void)_connectionAccept:(id)arg0 ;
-(void)_connectionEnded:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activate;
-(void)invalidate;


@end


#endif