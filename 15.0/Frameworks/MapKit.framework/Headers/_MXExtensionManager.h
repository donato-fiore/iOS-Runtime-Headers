// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONMANAGER_H
#define _MXEXTENSIONMANAGER_H

@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

#import <Foundation/Foundation.h>

#import "_MXExtensionProvider.h"

@interface _MXExtensionManager : NSObject

@property (weak, nonatomic) NSObject<_MXExtensionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider; // ivar: _extensionProvider
@property (readonly, nonatomic) NSObject<_MXExtensionLookupPolicy> *lookupPolicy; // ivar: _lookupPolicy
@property (retain, nonatomic) id *matchingContext; // ivar: _matchingContext


+(id)_extensionsWithLookupPolicy:(id)arg0 ;
+(id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg0 ;
+(id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg0 supportsIntentClassNames:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithIdentifier:(id)arg0 ;
+(id)_lookupPolicyWithBlock:(id)arg0 ;
+(id)_lookupPolicyWithExtensionPointNames:(id)arg0 ;
+(id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+(id)_maps_ridesharingIntentClassesForUIInteraction;
+(id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+(id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+(id)_queue;
+(id)lookupPolicyForExtensionWithCapabilities:(id)arg0 ;
+(id)lookupPolicyForExtensionWithCapability:(id)arg0 ;
+(id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg0 ;
+(id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg0 ;
+(id)managerWithExtensionLookupPolicy:(id)arg0 updateHandler:(id)arg1 ;
+(id)managerWithLookupPolicy:(id)arg0 delegate:(id)arg1 ;
+(id)restaurantQueueingIntentClassNames;
+(id)restaurantReservationIntentClassNames;
+(void)_maps_updateRideBookingExtensions:(id)arg0 ;
+(void)imageForKey:(id)arg0 extension:(id)arg1 completion:(id)arg2 ;
-(id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg0 ;
-(id)initWithLookupPolicy:(id)arg0 delegate:(id)arg1 ;
-(id)initWithLookupPolicy:(id)arg0 delegate:(id)arg1 extensionProvider:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif