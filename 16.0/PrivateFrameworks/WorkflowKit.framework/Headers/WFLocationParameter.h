// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOCATIONPARAMETER_H
#define WFLOCATIONPARAMETER_H



#import "WFParameter.h"

@interface WFLocationParameter : WFParameter

@property (readonly, nonatomic) BOOL allowsCurrentLocation; // ivar: _allowsCurrentLocation
@property (readonly, nonatomic) BOOL allowsTextOnlyLocations; // ivar: _allowsTextOnlyLocations
@property (readonly, nonatomic) CGFloat currentLocationAccuracy;
@property (readonly, nonatomic) BOOL defaultToCurrentLocation; // ivar: _defaultToCurrentLocation
@property (readonly, nonatomic) BOOL skipsProcessingCurrentLocation; // ivar: _skipsProcessingCurrentLocation


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif