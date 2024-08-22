// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOCATIONVALUE_H
#define WFLOCATIONVALUE_H

@class NSString, CLPlacemark;
@protocol WFVariableSerialization;

#import <Foundation/Foundation.h>

#import "WFVariableString.h"

@interface WFLocationValue : NSObject <WFVariableSerialization>



@property (readonly, nonatomic, getter=isCurrentLocation) BOOL currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultSearchText;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFVariableString *legacyVariableString; // ivar: _legacyVariableString
@property (readonly, nonatomic) NSString *locationName; // ivar: _locationName
@property (readonly, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (readonly) Class superclass;


-(id)initWithCurrentLocation;
-(id)initWithLegacyVariableString:(id)arg0 ;
-(id)initWithLocationName:(id)arg0 ;
-(id)initWithLocationName:(id)arg0 placemark:(id)arg1 ;
-(id)initWithPlacemark:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;


@end


#endif