// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREVGEOMAPITEMADDITIONALPLACEINFO_H
#define PLREVGEOMAPITEMADDITIONALPLACEINFO_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat areaInSquareMeters; // ivar: _areaInSquareMeters
@property (readonly, nonatomic) NSUInteger dominantOrderType; // ivar: _dominantOrderType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *placeType; // ivar: _placeType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 placeType:(id)arg1 dominantOrderType:(NSUInteger)arg2 areaInSquareMeters:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif