// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMANEUVER_H
#define CPMANEUVER_H

@class NSArray, UIColor, UIImage, NSString, NSUUID, NSMeasurement, NSSet;
@protocol CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"
#import "CPTravelEstimates.h"
#import "CPLaneGuidance.h"

@interface CPManeuver : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *attributedInstructionVariants; // ivar: _attributedInstructionVariants
@property (retain, nonatomic) UIColor *cardBackgroundColor; // ivar: _cardBackgroundColor
@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short componentID; // ivar: _componentID
@property (copy, nonatomic) NSArray *dashboardAttributedInstructionVariants; // ivar: _dashboardAttributedInstructionVariants
@property (copy, nonatomic) NSArray *dashboardInstructionVariants; // ivar: _dashboardInstructionVariants
@property (retain, nonatomic) UIImage *dashboardJunctionImage;
@property (retain, nonatomic) CPImageSet *dashboardJunctionImageSet; // ivar: _dashboardJunctionImageSet
@property (retain, nonatomic) UIImage *dashboardSymbolImage;
@property (retain, nonatomic) CPImageSet *dashboardSymbolImageSet; // ivar: _dashboardSymbolImageSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayStyle; // ivar: _displayStyle
@property (copy) NSString *exitInfo; // ivar: _exitInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) unsigned short index; // ivar: _index
@property (retain, nonatomic) NSMeasurement *initialDistance;
@property (retain, nonatomic) NSMeasurement *initialDistanceDisplay;
@property (retain, nonatomic) CPTravelEstimates *initialTravelEstimates; // ivar: _initialTravelEstimates
@property (copy, nonatomic) NSArray *instructionVariants; // ivar: _instructionVariants
@property (copy, nonatomic) NSSet *junctionElementAngles; // ivar: _junctionElementAngles
@property (copy, nonatomic) NSMeasurement *junctionExitAngle; // ivar: _junctionExitAngle
@property (retain, nonatomic) UIImage *junctionImage;
@property (retain, nonatomic) CPImageSet *junctionImageSet; // ivar: _junctionImageSet
@property (nonatomic) unsigned char junctionType; // ivar: _junctionType
@property (nonatomic) CPLaneGuidance *linkedLaneGuidance; // ivar: _linkedLaneGuidance
@property (nonatomic) unsigned short linkedLaneGuidanceIndex;
@property (nonatomic) unsigned short linkedLaneGuidanceIndex; // ivar: _linkedLaneGuidanceIndex
@property (nonatomic) unsigned char maneuverType; // ivar: _maneuverType
@property (copy, nonatomic) NSArray *notificationAttributedInstructionVariants; // ivar: _notificationAttributedInstructionVariants
@property (copy, nonatomic) NSArray *notificationInstructionVariants; // ivar: _notificationInstructionVariants
@property (retain, nonatomic) UIImage *notificationSymbolImage;
@property (retain, nonatomic) CPImageSet *notificationSymbolImageSet; // ivar: _notificationSymbolImageSet
@property (copy, nonatomic) NSArray *roadFollowingManeuverVariants; // ivar: _roadFollowingManeuverVariants
@property (retain, nonatomic) NSArray *stringInstructionVariants; // ivar: _stringInstructionVariants
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) CPImageSet *symbolSet; // ivar: _symbolSet
@property (nonatomic) unsigned char trafficSide; // ivar: _trafficSide
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)_descriptionForJunctionType:(unsigned char)arg0 ;
+(id)_descriptionForManeuverType:(unsigned char)arg0 ;
+(id)_descriptionForTrafficSide:(unsigned char)arg0 ;
+(id)accNavParameters;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif