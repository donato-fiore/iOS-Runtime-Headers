// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVGEOMETRYUTILS_H
#define PVGEOMETRYUTILS_H


#import <Foundation/Foundation.h>


@interface PVGeometryUtils : NSObject



+(struct CGPoint )pointFromNormalizedPoint:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 ;
+(struct CGRect )normalizedRectForRect:(struct CGRect )arg0 inBounds:(struct CGRect )arg1 ;
+(struct CGRect )normalizedRectForRect:(struct CGRect )arg0 inBoundsOfSize:(struct CGSize )arg1 ;
+(struct CGRect )rectFromMappingNormalizedRect:(struct CGRect )arg0 toBounds:(struct CGRect )arg1 ;
+(struct CGRect )rectFromMappingNormalizedRect:(struct CGRect )arg0 toBoundsOfSize:(struct CGSize )arg1 ;


@end


#endif