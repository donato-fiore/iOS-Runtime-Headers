// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTHISTOGRAMDIMENSION_H
#define PPTHISTOGRAMDIMENSION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTHistogramDimension : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSArray *edges; // ivar: _edges
@property (readonly) NSUInteger extent;
@property (readonly) BOOL isCategoryDimension; // ivar: _isCategoryDimension
@property (readonly, copy) NSString *metricName; // ivar: _metricName
@property (readonly) ? range; // ivar: _range
@property (readonly) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistogramDimension:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)dictionary;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 metricName:(id)arg2 ;
-(id)initWithCategories:(id)arg0 metricName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEdges:(id)arg0 metricName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif