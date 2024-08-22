// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIIMAGEACCUMULATOR_H
#define CIIMAGEACCUMULATOR_H


#import <Foundation/Foundation.h>


@interface CIImageAccumulator : NSObject {
    *void _state;
}


@property (readonly) CGRect extent;
@property (readonly) int format;


+(id)imageAccumulatorWithExtent:(struct CGRect )arg0 format:(int)arg1 ;
+(id)imageAccumulatorWithExtent:(struct CGRect )arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
+(id)imageAccumulatorWithExtent:(struct CGRect )arg0 format:(int)arg1 options:(id)arg2 ;
-(id)description;
-(id)image;
-(id)init;
-(id)initWithExtent:(struct CGRect )arg0 format:(int)arg1 ;
-(id)initWithExtent:(struct CGRect )arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
-(id)initWithExtent:(struct CGRect )arg0 format:(int)arg1 options:(id)arg2 ;
-(struct CGColorSpace *)colorSpace;
-(void)clear;
-(void)commitUpdates:(id)arg0 ;
-(void)dealloc;
-(void)setImage:(id)arg0 ;
-(void)setImage:(id)arg0 dirtyRect:(struct CGRect )arg1 ;


@end


#endif