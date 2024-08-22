// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOQUICKETATRANSITDEPARTURESINFO_H
#define GEOQUICKETATRANSITDEPARTURESINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface GEOQuickETATransitDeparturesInfo : NSObject

@property (readonly, nonatomic) CGFloat departureFrequency; // ivar: _departureFrequency
@property (readonly, nonatomic) NSDate *departureFrequencyValidUntil; // ivar: _departureFrequencyValidUntil
@property (readonly, nonatomic) BOOL departuresHaveFrequency; // ivar: _departuresHaveFrequency
@property (readonly, nonatomic) NSString *direction; // ivar: _direction
@property (readonly, nonatomic) NSString *headsign; // ivar: _headsign


-(id)_chooseMostImportantTransitLegInRoute:(id)arg0 ;
-(id)description;
-(id)initWithComposedRoute:(id)arg0 ;


@end


#endif