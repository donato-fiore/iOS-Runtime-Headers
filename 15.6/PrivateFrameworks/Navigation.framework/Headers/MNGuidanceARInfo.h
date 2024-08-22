// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNGUIDANCEARINFO_H
#define MNGUIDANCEARINFO_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, GEOServerFormattedString;

#import <Foundation/Foundation.h>


@interface MNGuidanceARInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *arrowLabel; // ivar: _arrowLabel
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) CGFloat heading; // ivar: _heading
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *instruction; // ivar: _instruction
@property (readonly, nonatomic) ? locationCoordinate; // ivar: _locationCoordinate
@property (readonly, nonatomic) GEOPolylineCoordinateRange locationCoordinateRange; // ivar: _locationCoordinateRange
@property (readonly, nonatomic) NSString *maneuverRoadName; // ivar: _maneuverRoadName
@property (readonly, nonatomic) int maneuverType; // ivar: _maneuverType
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (readonly, nonatomic) NSDictionary *variableOverrides; // ivar: _variableOverrides


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(int)arg0 maneuverType:(int)arg1 instruction:(id)arg2 variableOverrides:(id)arg3 arrowLabel:(id)arg4 locationCoordinate:(struct ? )arg5 maneuverRoadName:(id)arg6 heading:(CGFloat)arg7 stepIndex:(NSUInteger)arg8 ;
-(id)initWithEventType:(int)arg0 maneuverType:(int)arg1 instruction:(id)arg2 variableOverrides:(id)arg3 arrowLabel:(id)arg4 locationCoordinateRange:(struct GEOPolylineCoordinateRange )arg5 maneuverRoadName:(id)arg6 stepIndex:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif