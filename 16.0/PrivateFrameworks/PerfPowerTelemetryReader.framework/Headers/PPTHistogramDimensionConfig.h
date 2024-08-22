// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTHISTOGRAMDIMENSIONCONFIG_H
#define PPTHISTOGRAMDIMENSIONCONFIG_H

@class NSArray, NSOrderedSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPTHistogramDimensionConfig : NSObject <NSSecureCoding, NSCopying>

 {
    CGFloat _minRange;
    CGFloat _maxRange;
    NSUInteger _histBinCount;
    NSArray *_histEdges;
}


@property (readonly) NSUInteger binCount;
@property (readonly) NSOrderedSet *categories; // ivar: _categories
@property (readonly) NSArray *edges;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) ? range;
@property (readonly) NSArray *samples; // ivar: _samples
@property (readonly) BOOL useForAccumulators; // ivar: _useForAccumulators
@property (readonly) BOOL useOverflowBins; // ivar: _useOverflowBins


+(BOOL)supportsSecureCoding;
-(id)configurationEdges;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 label:(id)arg2 options:(struct ? )arg3 samples:(id)arg4 ;
-(id)initWithCategories:(id)arg0 label:(id)arg1 options:(struct ? )arg2 samples:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEdges:(id)arg0 label:(id)arg1 options:(struct ? )arg2 samples:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif