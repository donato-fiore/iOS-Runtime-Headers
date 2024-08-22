// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPLACEANNOTATION_H
#define CPLPLACEANNOTATION_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLPlaceAnnotation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *placeLevel; // ivar: _placeLevel
@property (copy, nonatomic) NSString *placeName; // ivar: _placeName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif