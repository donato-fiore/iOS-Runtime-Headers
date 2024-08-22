// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUHISTOGRAM_H
#define NUHISTOGRAM_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NUHistogram : NSObject <NSCopying, NSMutableCopying>

 {
    unique_ptr<NU::Histogram<long, double>, std::default_delete<NU::Histogram<long, double>>> _histogram;
}


@property (readonly, nonatomic) NSInteger binCount;
@property (readonly, nonatomic) CGFloat maximum;
@property (readonly, nonatomic) CGFloat minimum;
@property (readonly, nonatomic) CGFloat mode;
@property (readonly, nonatomic) ? range;
@property (readonly, nonatomic) NSInteger sampleCount;
@property (readonly, nonatomic) *NSInteger values;


-(CGFloat)percentile:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithBinCount:(NSInteger)arg0 range:(struct ? )arg1 ;
-(id)initWithHistogram:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif