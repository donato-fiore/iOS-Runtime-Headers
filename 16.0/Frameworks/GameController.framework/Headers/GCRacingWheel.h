// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCRACINGWHEEL_H
#define GCRACINGWHEEL_H

@class NSArray, NSString;
@protocol GCDevice, GCRacingWheelProductInfo, OS_dispatch_queue, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_GCDevicePhysicalInputComponent.h"
#import "GCPhysicalInputProfile.h"
#import "GCRacingWheelInput.h"

@interface GCRacingWheel : NSObject <GCDevice>

 {
    NSArray *_components;
    id<GCRacingWheelProductInfo> *_info;
    _GCDevicePhysicalInputComponent *_input;
}


@property (readonly, getter=isAcquired) BOOL acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSCopying><NSObject><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, getter=isSnapshot) BOOL snapshot; // ivar: _isSnapshot
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly) GCRacingWheelInput *wheelInput;


+(id)connectedRacingWheels;
-(BOOL)acquireDeviceWithError:(*id)arg0 ;
-(id)capture;
-(id)init;
-(id)initWithComponents:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 components:(id)arg1 ;
-(void)relinquishDevice;


@end


#endif