// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUSERLOCATION_H
#define MKUSERLOCATION_H

@class NSString, CLLocation, CLHeading;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>

#import "MKUserLocationInternal.h"

@interface MKUserLocation : NSObject <MKAnnotation>

 {
    MKUserLocationInternal *_internal;
}


@property (readonly, nonatomic) CGFloat accuracy;
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expectedCoordinateUpdateInterval; // ivar: _expectedCoordinateUpdateInterval
@property (nonatomic) CGFloat expectedHeadingUpdateInterval; // ivar: _expectedHeadingUpdateInterval
@property (retain, nonatomic) CLLocation *fixedLocation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLHeading *heading;
@property (readonly, nonatomic) CGFloat headingDegrees;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *predictedLocation;
@property (readonly, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isUpdating) BOOL updating;


+(void)_setAnnotationClass:(Class)arg0 ;
-(BOOL)hasValidHeading;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(CGFloat)course;
-(id)annotation;
-(id)init;
-(void)_updateCoordinate;
-(void)dealloc;
-(void)reset;
-(void)setCourse:(CGFloat)arg0 ;


@end


#endif