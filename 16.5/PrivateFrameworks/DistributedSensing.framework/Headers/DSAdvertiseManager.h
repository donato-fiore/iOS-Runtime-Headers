// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSADVERTISEMANAGER_H
#define DSADVERTISEMANAGER_H

@class CBAdvertiser;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSXPCServer.h"

@interface DSAdvertiseManager : NSObject {
    CBAdvertiser *_bleAdvertiser;
    unsigned char _cbVehicleState;
    unsigned char _cbVehicleConfidence;
    unsigned char _cbDSActionFlags;
    unsigned char _cbTieBreaker;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger dsAdvertiseFlags; // ivar: _dsAdvertiseFlags
@property (retain, nonatomic) DSXPCServer *xpcDaemonServer; // ivar: _xpcDaemonServer


-(BOOL)_getAdvertisementFields;
-(void)_setDSActionFieldsInAdvertiser:(id)arg0 ;
-(void)_setDSInfoFieldsInAdvertiser:(id)arg0 ;
-(void)startAdvertising;
-(void)stopAdvertising;


@end


#endif