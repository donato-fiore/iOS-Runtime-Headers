// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAITEMMETADATA_H
#define OKMEDIAITEMMETADATA_H

@class NSString, NSDate, CLLocation, NSArray;

#import <Foundation/Foundation.h>


@interface OKMediaItemMetadata : NSObject

@property (copy) NSString *UTI; // ivar: _UTI
@property (readonly) CGFloat aspectRatio;
@property (copy) NSString *caption; // ivar: _caption
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property CGFloat displayTime; // ivar: _displayTime
@property CGFloat duration; // ivar: _duration
@property (readonly) BOOL hasRegionsOfInterest;
@property (readonly) BOOL hasRegionsOfInterestName;
@property CGFloat latitude; // ivar: _latitude
@property (readonly) CLLocation *location;
@property (readonly) CLLocationCoordinate2D locationCoordinate;
@property CGFloat longitude; // ivar: _longitude
@property (copy) NSString *name; // ivar: _name
@property BOOL opaque; // ivar: _opaque
@property NSUInteger orientation; // ivar: _orientation
@property CGRect regionOfInterestContainerBounds; // ivar: _regionOfInterestContainerBounds
@property (copy) NSArray *regionsOfInterest; // ivar: _regionsOfInterest
@property BOOL regionsOfInterestDetected; // ivar: _regionsOfInterestDetected
@property (readonly) NSArray *regionsOfInterestName;
@property CGSize resolution; // ivar: _resolution
@property NSUInteger subType; // ivar: _subType
@property NSUInteger type; // ivar: _type


+(NSUInteger)alignResolution:(NSUInteger)arg0 ;
+(id)keyPathsForValuesAffectingAspectRatio;
+(id)keyPathsForValuesAffectingHasRegionsOfInterest;
+(id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+(id)keyPathsForValuesAffectingLocation;
+(id)keyPathsForValuesAffectingLocationCoordinate;
+(id)keyPathsForValuesAffectingRegionsOfInterestName;
-(BOOL)isMediaSubtype:(NSUInteger)arg0 ;
-(BOOL)writeToFileURL:(id)arg0 ;
-(NSUInteger)bestResolutionForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 quality:(CGFloat)arg2 ;
-(id)dictionary;
-(id)dictionaryValueForKey:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setPropertiesFromDictionary:(id)arg0 ;


@end


#endif