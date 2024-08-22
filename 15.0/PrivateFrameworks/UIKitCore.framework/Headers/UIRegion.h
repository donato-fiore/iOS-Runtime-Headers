// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIREGION_H
#define UIREGION_H

@class PKRegion;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface UIRegion : NSObject <NSCopying, NSCoding>

 {
    PKRegion *_region;
}


@property (readonly, nonatomic) PKRegion *_region;
@property (readonly, nonatomic) UIBezierPath *path;


+(id)infiniteRegion;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithRadius:(CGFloat)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)inverseRegion;
-(id)regionByDifferenceFromRegion:(id)arg0 ;
-(id)regionByIntersectionWithRegion:(id)arg0 ;
-(id)regionByUnionWithRegion:(id)arg0 ;
-(void)containsPoints:(*float)arg0 locationStride:(NSInteger)arg1 results:(char *)arg2 resultsStride:(NSInteger)arg3 count:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif