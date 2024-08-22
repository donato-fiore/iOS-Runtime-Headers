// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEMORYFEATURE_H
#define PHMEMORYFEATURE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHMemoryFeature : NSObject <NSSecureCoding>

 {
    id *_subtypeSpecificAttribute;
}


@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)encodedBlockableFeatures:(id)arg0 photoLibrary:(id)arg1 ;
+(id)locationMemoryFeatureWithAreaForName:(id)arg0 ;
+(id)locationMemoryFeatureWithLocation:(id)arg0 ;
+(id)memoryFeatureWithData:(id)arg0 photoLibrary:(id)arg1 ;
+(id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg0 ;
+(id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg0 photoLibrary:(id)arg1 ;
+(id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg0 photoLibrary:(id)arg1 ;
+(id)stringForType:(NSUInteger)arg0 ;
+(id)timeMemoryFeatureWithDate:(id)arg0 ;
+(id)timeMemoryFeatureWithDateInterval:(id)arg0 ;
+(id)timeMemoryFeatureWithHolidayForName:(id)arg0 ;
-(BOOL)collidesWithAreaWithName:(id)arg0 ;
-(BOOL)collidesWithDate:(id)arg0 ;
-(BOOL)collidesWithDateInterval:(id)arg0 ;
-(BOOL)collidesWithFeature:(id)arg0 ;
-(BOOL)collidesWithHolidayWithName:(id)arg0 ;
-(BOOL)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)collidesWithPersonWithLocalIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)areaName;
-(id)date;
-(id)dateInterval;
-(id)description;
-(id)encodedDataWithPhotoLibrary:(id)arg0 ;
-(id)holidayName;
-(id)initWithCoder:(id)arg0 ;
-(id)location;
-(id)personLocalIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif