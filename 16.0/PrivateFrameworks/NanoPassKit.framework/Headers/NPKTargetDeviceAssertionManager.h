// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKTARGETDEVICEASSERTIONMANAGER_H
#define NPKTARGETDEVICEASSERTIONMANAGER_H

@class NSMutableDictionary, IDSService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKTargetDeviceAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (retain, nonatomic) NSMutableDictionary *assertTypesUUIDsMap; // ivar: _assertTypesUUIDsMap
@property (retain, nonatomic) NSMutableDictionary *outstandingAssertionStatusUpdaters; // ivar: _outstandingAssertionStatusUpdaters
@property (readonly, nonatomic) IDSService *transportationService; // ivar: _transportationService


-(id)_IDSSendOptions;
-(id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg0 assertionType:(NSUInteger)arg1 assertionUUID:(id)arg2 ;
-(id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg0 ;
-(id)_sendAssertionRequest:(id)arg0 ;
-(id)acquireAssertionOfType:(NSUInteger)arg0 ;
-(id)assertionsUUIDsOfType:(NSUInteger)arg0 ;
-(id)initWithTransportationService:(id)arg0 ;
-(void)_addOutstandingAssertionStatusUpdater:(id)arg0 withAssertType:(int)arg1 ;
-(void)invalidateAssertionWithUUID:(id)arg0 ;


@end


#endif