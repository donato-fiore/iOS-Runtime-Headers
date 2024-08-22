// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVENDORSPECIFICROUTE_H
#define MRUVENDORSPECIFICROUTE_H

@class MPAVRoute, DADevice, NSArray, UIImage, NSString, NSMutableDictionary;


#import "MRUVendorSpecificRoute.h"

@interface MRUVendorSpecificRoute : MPAVRoute

@property (readonly, nonatomic) DADevice *device; // ivar: _device
@property (readonly, nonatomic) NSArray *endpoints;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) BOOL isGroup;
@property (nonatomic) BOOL isPicked; // ivar: _isPicked
@property (nonatomic) BOOL isPreferredRoute; // ivar: _isPreferredRoute
@property (readonly, nonatomic) MRUVendorSpecificRoute *preferredSubroute; // ivar: _preferredSubroute
@property (readonly, nonatomic) UIImage *protocolIcon; // ivar: _protocolIcon
@property (readonly, nonatomic) NSString *protocolIdentifier;
@property (readonly, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (nonatomic) BOOL shouldBeDisplayed; // ivar: _shouldBeDisplayed
@property (retain, nonatomic) NSMutableDictionary *subrouteMap; // ivar: _subrouteMap
@property (readonly, nonatomic) NSArray *subroutes;
@property (retain, nonatomic) MPAVRoute *underlyingNativeRoute; // ivar: _underlyingNativeRoute
@property (readonly, nonatomic) NSInteger vendorSpecificRouteType;


-(BOOL)isAirPlayRoute;
-(BOOL)isDisplayedAsPicked;
-(BOOL)isKnown;
-(BOOL)supportsAirPlayGrouping;
-(NSInteger)moreCapableTypeBetween:(NSInteger)arg0 otherType:(NSInteger)arg1 ;
-(NSInteger)routeSubtype;
-(NSInteger)routeType;
-(id)initWithDevice:(id)arg0 ;
-(id)routeName;
-(id)routeUID;
-(void)addSubRoute:(id)arg0 ;


@end


#endif