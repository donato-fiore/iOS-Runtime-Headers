// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLICATIONINFO_H
#define HMDAPPLICATIONINFO_H

@class HMFObject, NSHashTable, NSString, NSURL, NSArray, NSData;
@protocol HMFLogging, HMFLocking;


#import "HMDApplicationInfo.h"

@interface HMDApplicationInfo : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
    NSHashTable *_processes;
}


@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *companionApplicationInfo; // ivar: _companionApplicationInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly) NSUInteger hash;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (readonly, getter=isIndependent) BOOL independent; // ivar: _independent
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, copy) NSArray *processes;
@property (readonly) Class superclass;
@property (readonly, copy) NSData *vendorIdentifier;


+(id)applicationInfoForBundleIdentifier:(id)arg0 ;
+(id)applicationInfoForBundleURL:(id)arg0 ;
+(id)logCategory;
+(id)privateVendorIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)clientIdentifierSalt:(*id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)addProcess:(id)arg0 ;
-(void)removeProcess:(id)arg0 ;


@end


#endif