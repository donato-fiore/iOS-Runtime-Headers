// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUROUTINGVIEWCONTROLLERUPDATE_H
#define MRUROUTINGVIEWCONTROLLERUPDATE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface MRURoutingViewControllerUpdate : NSObject

@property (copy, nonatomic) NSArray *activatedVendorSpecificDeviceIDs; // ivar: _activatedVendorSpecificDeviceIDs
@property (copy, nonatomic) NSArray *airPlayRoutes; // ivar: _airPlayRoutes
@property (nonatomic) BOOL canGroup; // ivar: _canGroup
@property (copy, nonatomic) NSArray *displayAsPickedRoutes; // ivar: _displayAsPickedRoutes
@property (copy, nonatomic) NSArray *displayableAvailableRoutes; // ivar: _displayableAvailableRoutes
@property (nonatomic) BOOL hasPendingPickedRoutes; // ivar: _hasPendingPickedRoutes
@property (copy, nonatomic) NSArray *nativeRoutes; // ivar: _nativeRoutes
@property (copy, nonatomic) NSArray *nativeRoutesInVendorSpecificGroup; // ivar: _nativeRoutesInVendorSpecificGroup
@property (copy, nonatomic) NSArray *pendingPickedRoutes; // ivar: _pendingPickedRoutes
@property (copy, nonatomic) NSArray *pendingVendorSpecificDeviceIDs; // ivar: _pendingVendorSpecificDeviceIDs
@property (copy, nonatomic) NSArray *pickedRoutes; // ivar: _pickedRoutes
@property (copy, nonatomic) NSDictionary *routeGrouping; // ivar: _routeGrouping
@property (nonatomic) BOOL shouldReload; // ivar: _shouldReload
@property (copy, nonatomic) NSArray *volumeCapableRoutes; // ivar: _volumeCapableRoutes




@end


#endif