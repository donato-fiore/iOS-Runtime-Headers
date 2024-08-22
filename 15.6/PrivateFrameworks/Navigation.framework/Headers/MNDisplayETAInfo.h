// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNDISPLAYETAINFO_H
#define MNDISPLAYETAINFO_H

@class NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNDisplayETAInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *displayETAToEndOfLeg; // ivar: _displayETAToEndOfLeg
@property (retain, nonatomic) NSDate *displayETAToEndOfRoute; // ivar: _displayETAToEndOfRoute
@property (nonatomic) NSUInteger displayRemainingMinutesToEndOfLeg; // ivar: _displayRemainingMinutesToEndOfLeg
@property (nonatomic) NSUInteger displayRemainingMinutesToEndOfRoute; // ivar: _displayRemainingMinutesToEndOfRoute
@property (nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (retain, nonatomic) NSUUID *routeID; // ivar: _routeID


+(BOOL)supportsSecureCoding;
-(BOOL)_isDisplayDate:(id)arg0 equalToDisplayDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayETAToEndOfLeg:(id)arg0 displayRemainingMinutesToEndOfLeg:(NSUInteger)arg1 displayETAToEndOfRoute:(id)arg2 displayRemainingMinutesToEndOfRoute:(NSUInteger)arg3 ;
-(id)initWithDisplayETAToEndOfLeg:(id)arg0 displayRemainingMinutesToEndOfLeg:(NSUInteger)arg1 forLegIndex:(NSUInteger)arg2 displayETAToEndOfRoute:(id)arg3 displayRemainingMinutesToEndOfRoute:(NSUInteger)arg4 forRouteID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif