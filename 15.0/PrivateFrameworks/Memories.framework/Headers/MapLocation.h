// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPLOCATION_H
#define MAPLOCATION_H

@class NSMutableArray, NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MapLocation : NSObject <NSCoding, NSCopying>



@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (retain, nonatomic) NSString *countryName; // ivar: _countryName
@property (retain, nonatomic) NSString *customName; // ivar: _customName
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (nonatomic, getter=isResolving) BOOL resolving; // ivar: _resolving
@property (nonatomic) int state; // ivar: _state


+(id)defaultLocation;
+(id)mapLocationWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
+(id)mapLocationWithLocation:(id)arg0 ;
+(id)mapLocationWithLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
+(id)mapLocationWithMapItem:(id)arg0 ;
+(id)objectFromPlist:(id)arg0 inProject:(id)arg1 ;
-(BOOL)hasSameCoordinateAsLocation:(id)arg0 tolerance:(float)arg1 ;
-(BOOL)hasValidCoordinate;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)plistRepresentation;
-(id)stringRepresentation;
-(void)_resolveWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveWithCompletionHandler:(id)arg0 ;


@end


#endif