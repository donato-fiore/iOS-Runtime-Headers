// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREGION_H
#define SKREGION_H

@class PKRegion;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKRegion : NSObject <NSCopying, NSSecureCoding>

 {
    PKRegion *_region;
}


@property (readonly, nonatomic) *CGPath path;


+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToRegion:(id)arg0 ;
-(BOOL)isInfinite;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(struct CGPath *)arg0 ;
-(id)initWithRadius:(float)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)inverseRegion;
-(id)regionByDifferenceFromRegion:(id)arg0 ;
-(id)regionByIntersectionWithRegion:(id)arg0 ;
-(id)regionByUnionWithRegion:(id)arg0 ;
-(void)containsPoints:(*float)arg0 locationStride:(NSInteger)arg1 results:(char *)arg2 resultsStride:(NSInteger)arg3 count:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif