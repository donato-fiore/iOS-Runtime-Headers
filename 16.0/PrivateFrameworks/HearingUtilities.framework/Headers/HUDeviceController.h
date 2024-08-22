// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDEVICECONTROLLER_H
#define HUDEVICECONTROLLER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol AXHARemoteUpdateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUDeviceController : NSObject <AXHARemoteUpdateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *deviceUpdatesDescription; // ivar: _deviceUpdatesDescription
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceUpdatesQueue; // ivar: _deviceUpdatesQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks; // ivar: _updateDeviceBlocks


-(BOOL)representsLocalDevices;
-(id)hearingAidForDeviceID:(id)arg0 ;
-(id)init;
-(void)device:(id)arg0 didUpdateProperty:(NSUInteger)arg1 ;
-(void)registerForPropertyUpdates:(id)arg0 ;
-(void)stopPropertyUpdates;
-(void)updateProperty:(NSUInteger)arg0 forDeviceID:(id)arg1 ;
-(void)writeValue:(id)arg0 forProperty:(NSUInteger)arg1 andDeviceID:(id)arg2 ;


@end


#endif