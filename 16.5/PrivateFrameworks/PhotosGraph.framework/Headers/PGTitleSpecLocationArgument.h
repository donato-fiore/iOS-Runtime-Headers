// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTITLESPECLOCATIONARGUMENT_H
#define PGTITLESPECLOCATIONARGUMENT_H

@class NSString, NSSet;


#import "PGTitleSpecArgument.h"

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument

@property (readonly) BOOL filterLocations; // ivar: _filterLocations
@property NSUInteger lineBreakBehavior; // ivar: _lineBreakBehavior
@property (retain, nonatomic) NSString *locationName; // ivar: _locationName
@property (readonly) NSUInteger type; // ivar: _type
@property (retain) NSSet *usedLocationNodes; // ivar: _usedLocationNodes


+(id)argumentWithLocationType:(NSUInteger)arg0 filterLocations:(BOOL)arg1 ;
+(id)argumentWithLocationTypeLocationForLocationName:(id)arg0 ;
-(id)_generateBusinessItemTitleWithMomentNodes:(id)arg0 locationHelper:(id)arg1 ;
-(id)_generateLocationTitleWithOptions:(id)arg0 locationHelper:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;
-(id)initWithLocationType:(NSUInteger)arg0 filterLocations:(BOOL)arg1 ;


@end


#endif