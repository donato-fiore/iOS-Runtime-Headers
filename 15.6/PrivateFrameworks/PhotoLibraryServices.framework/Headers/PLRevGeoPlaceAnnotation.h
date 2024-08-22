// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLREVGEOPLACEANNOTATION_H
#define PLREVGEOPLACEANNOTATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>



@property (nonatomic) int placeLevel; // ivar: _placeLevel
@property (retain, nonatomic) NSString *placeName; // ivar: _placeName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;


@end


#endif