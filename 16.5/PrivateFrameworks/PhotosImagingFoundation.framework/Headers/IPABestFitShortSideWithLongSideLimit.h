// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPABESTFITSHORTSIDEWITHLONGSIDELIMIT_H
#define IPABESTFITSHORTSIDEWITHLONGSIDELIMIT_H



#import "IPAImageSizePolicy.h"

@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy {
    NSInteger _nominalShortSide;
    NSInteger _minLongSide;
    NSInteger _maxLongSide;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNominalShortSide:(NSInteger)arg0 minLongSide:(NSInteger)arg1 maxLongSide:(NSInteger)arg2 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif