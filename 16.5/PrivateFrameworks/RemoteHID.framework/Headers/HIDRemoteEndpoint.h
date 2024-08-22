// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDREMOTEENDPOINT_H
#define HIDREMOTEENDPOINT_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary *_devices;
    NSMutableArray *_prevDeviceLog;
}


@property NSUInteger endpointID; // ivar: _endpointID
@property unsigned char primarySide; // ivar: _primarySide


-(id)getDevice:(NSUInteger)arg0 ;
-(id)initWithID:(NSUInteger)arg0 ;
-(void)addDevice:(id)arg0 ;
-(void)copyState:(id)arg0 ;
-(void)removeAllDevices;
-(void)removeDevice:(id)arg0 ;
-(void)removeDeviceID:(NSUInteger)arg0 ;


@end


#endif