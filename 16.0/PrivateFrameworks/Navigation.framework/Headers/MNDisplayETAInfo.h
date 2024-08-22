// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNDISPLAYETAINFO_H
#define MNDISPLAYETAINFO_H

@class NSDate, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNDisplayETAInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg;
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute;
@property (readonly, nonatomic) NSUInteger displayRemainingMinutesToEndOfLeg;
@property (readonly, nonatomic) NSUInteger displayRemainingMinutesToEndOfRoute;
@property (retain, nonatomic) NSDate *etaToEndOfRoute; // ivar: _etaToEndOfRoute
@property (readonly, nonatomic) NSUInteger legIndex;
@property (retain, nonatomic) NSArray *legInfos; // ivar: _legInfos
@property (nonatomic) NSUInteger remainingMinutesToEndOfRoute; // ivar: _remainingMinutesToEndOfRoute
@property (retain, nonatomic) NSUUID *routeID; // ivar: _routeID


+(BOOL)isDisplayDate:(id)arg0 equalTo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayETAToEndOfLeg:(id)arg0 displayRemainingMinutesToEndOfLeg:(NSUInteger)arg1 displayETAToEndOfRoute:(id)arg2 displayRemainingMinutesToEndOfRoute:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif