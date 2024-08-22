// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMRESIDENTDEVICE_H
#define HMRESIDENTDEVICE_H

@class HMFUnfairLock, NSUUID, NSArray, NSString;
@protocol HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding, HMResidentDeviceDelegate;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMDevice.h"
#import "HMHome.h"

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding>

 {
    HMFUnfairLock *_lock;
}


@property (copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property NSUInteger capabilities; // ivar: _capabilities
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMResidentDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMDevice *device; // ivar: _device
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak) HMHome *home; // ivar: _home
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRuntimeStateUpdate:(id)arg0 ;
-(void)updatedEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif