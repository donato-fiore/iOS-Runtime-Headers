// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCHAPTICCAPABILITIES_H
#define GCHAPTICCAPABILITIES_H

@class NSArray, NSString;
@protocol NSSecureCoding, GCDeviceHapticCapabilityInfo, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCHapticCapabilityGraph.h"
#import "GCDeviceHaptics.h"

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo>

 {
    NSArray *_hapticEnginesInfo;
    GCController *_controller;
}


@property (readonly) GCHapticCapabilityGraph *capabilityGraph; // ivar: _capabilityGraph
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) GCDeviceHaptics *deviceHaptics; // ivar: _deviceHaptics
@property (copy) NSArray *hapticEngines; // ivar: _hapticEngines
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL initialized; // ivar: _initialized
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 hapticEnginesInfo:(id)arg1 hapticCapabilityGraph:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeHapticEngines;
-(void)removeHapticEngines;
-(void)setController:(id)arg0 ;


@end


#endif