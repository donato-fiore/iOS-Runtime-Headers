// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACEANNOTATION_H
#define PXPLACEANNOTATION_H

@class NSData, NSDictionary, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXPlaceAnnotation : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSNumber *placeLevel; // ivar: _placeLevel
@property (readonly, nonatomic) NSString *placeLevelAsString;
@property (retain, nonatomic) NSString *placeName; // ivar: _placeName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlaceAnnotation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithPlaceLevel:(id)arg0 placeName:(id)arg1 ;


@end


#endif