// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTHISTOGRAM_H
#define PPTHISTOGRAM_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTHistogram : NSObject <NSCopying, NSSecureCoding>

 {
    unique_ptr<ppt::Histogram_Internal, std::default_delete<ppt::Histogram_Internal>> _histogramPtr;
}


@property (readonly, copy) NSArray *dimensions; // ivar: _dimensions
@property (readonly, copy) NSArray *metrics;
@property (readonly) NSUInteger rank;
@property (readonly) NSUInteger size;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistogram:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)sum:(BOOL)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)counts:(BOOL)arg0 ;
-(id)createArrayFromDimensionIdx:(NSUInteger)arg0 withFlowBins:(BOOL)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)dictionary;
-(id)indicesFor:(id)arg0 ;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 metricName:(id)arg2 ;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 metricName:(id)arg2 samples:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recordSample:(id)arg0 ;
-(void)reset;


@end


#endif