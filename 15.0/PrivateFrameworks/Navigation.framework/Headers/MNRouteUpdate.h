// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEUPDATE_H
#define MNROUTEUPDATE_H

@class NSString, NSArray, CLLocation, NSDate;
@protocol MNJSONOutput, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MNRouteUpdate : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat aggressiveTravelTime; // ivar: _aggressiveTravelTime
@property (nonatomic) CGFloat conservativeTravelTime; // ivar: _conservativeTravelTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *longRouteSummary; // ivar: _longRouteSummary
@property (copy, nonatomic) NSArray *nonRecommendedRoutes; // ivar: _nonRecommendedRoutes
@property (retain, nonatomic) CLLocation *origin; // ivar: _origin
@property (retain, nonatomic) NSDate *requestTime; // ivar: _requestTime
@property (copy, nonatomic) NSString *requestingClientID; // ivar: _requestingClientID
@property (copy, nonatomic) NSString *routeSummary; // ivar: _routeSummary
@property (copy, nonatomic) NSArray *routes; // ivar: _routes
@property (readonly) Class superclass;
@property (nonatomic) NSInteger travelMode; // ivar: _travelMode
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)satisfiesFreshness:(id)arg0 fromLocation:(id)arg1 ;
-(BOOL)satisfiesOptions:(NSInteger)arg0 ;
-(id)copyWithOptions:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif