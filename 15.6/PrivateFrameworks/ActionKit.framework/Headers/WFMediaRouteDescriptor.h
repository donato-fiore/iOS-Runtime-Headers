// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMEDIAROUTEDESCRIPTOR_H
#define WFMEDIAROUTEDESCRIPTOR_H

@class MTLModel, NSString, NSDictionary;
@protocol NSSecureCoding, MTLJSONSerializing;



@interface WFMediaRouteDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *groupUID; // ivar: _groupUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLocalDevice; // ivar: _isLocalDevice
@property (readonly, copy, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, copy, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly) Class superclass;


+(BOOL)routeUID:(id)arg0 isEqualToRouteUID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(BOOL)isEqualInRouteUIDs:(id)arg0 ;
-(id)findMatchingRoute:(id)arg0 ;
-(id)initWithRouteUID:(id)arg0 groupUID:(id)arg1 routeName:(id)arg2 isLocalDevice:(BOOL)arg3 ;


@end


#endif