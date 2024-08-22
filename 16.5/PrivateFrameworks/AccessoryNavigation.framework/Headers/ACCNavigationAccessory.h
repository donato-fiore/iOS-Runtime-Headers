// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCNAVIGATIONACCESSORY_H
#define ACCNAVIGATIONACCESSORY_H

@class NSString, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ACCNavigationProvider.h"

@interface ACCNavigationAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID; // ivar: _accessoryUID
@property (readonly) NSDictionary *componentList;
@property (retain) NSMutableDictionary *componentListInternal; // ivar: _componentListInternal
@property (retain) NSMutableDictionary *objectDetectionComponentListInternal; // ivar: _objectDetectionComponentListInternal
@property (readonly, weak, nonatomic) ACCNavigationProvider *provider; // ivar: _provider


-(BOOL)componentIdListIsEnabled:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)objectDetectionComponentIdListIsEnabled:(id)arg0 ;
-(BOOL)requestedSourceNameForAnyComponent;
-(BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
-(BOOL)supportsExitInfoForAnyComponent;
-(BOOL)supportsLaneGuidanceForAnyComponent;
-(BOOL)supportsTimeZoneOffsetForAnyComponent;
-(NSUInteger)hash;
-(id)componentListForIdList:(id)arg0 ;
-(id)description;
-(id)initWithAccessoryUID:(id)arg0 provider:(id)arg1 ;
-(id)objectDetectionComponentList;
-(id)objectDetectionComponentListForIdList:(id)arg0 ;
-(void)iterateComponentIdList:(id)arg0 block:(id)arg1 ;
-(void)updateLaneGuidanceInfo:(id)arg0 componentList:(id)arg1 ;
-(void)updateManeuverInfo:(id)arg0 componentList:(id)arg1 ;
-(void)updateRouteGuidanceInfo:(id)arg0 componentList:(id)arg1 ;


@end


#endif