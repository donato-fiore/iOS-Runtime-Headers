// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTHISTOGRAMDIMENSION_H
#define PPTHISTOGRAMDIMENSION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PPTHistogram.h"

@interface PPTHistogramDimension : NSObject <NSSecureCoding, NSCopying>

 {
    int _index;
    PPTHistogram *_histogram;
}


@property (readonly) CGFloat area;
@property (readonly) NSArray *categories;
@property (readonly) NSString *label;
@property (readonly) CGFloat maxSample;
@property (readonly) CGFloat mean;
@property (readonly) CGFloat median;
@property (readonly) CGFloat minSample;
@property (readonly) CGFloat mode;
@property (readonly) ? range;
@property (readonly) CGFloat variance;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 andIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif