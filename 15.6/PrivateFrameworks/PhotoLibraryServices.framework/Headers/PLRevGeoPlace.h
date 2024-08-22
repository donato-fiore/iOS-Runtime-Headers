// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLREVGEOPLACE_H
#define PLREVGEOPLACE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLRevGeoPlace : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *placeInfosForOrderType; // ivar: _placeInfosForOrderType


+(BOOL)supportsSecureCoding;
+(NSUInteger)_dominantOrderTypeForPlaceType:(id)arg0 lastOrderType:(NSUInteger)arg1 ;
+(id)_newFilterSortedPlaceInfos:(id)arg0 usingPlaceAnnotation:(id)arg1 outFoundOrderType:(*NSUInteger)arg2 outPreviousOrderType:(*NSUInteger)arg3 ;
+(id)placeWithMapItem:(id)arg0 placeAnnotation:(id)arg1 ;
-(id)bestPlaceInfoForOrderType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaceInfosForOrderType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif