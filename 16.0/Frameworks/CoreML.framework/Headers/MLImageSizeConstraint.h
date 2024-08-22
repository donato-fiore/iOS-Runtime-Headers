// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLIMAGESIZECONSTRAINT_H
#define MLIMAGESIZECONSTRAINT_H

@class NSArray, NSOrderedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLImageSizeConstraint : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *enumeratedImageSizes;
@property (readonly, nonatomic) NSOrderedSet *imageSizeSet; // ivar: _imageSizeSet
@property (readonly, nonatomic) _NSRange pixelsHighRange; // ivar: _pixelsHighRange
@property (readonly, nonatomic) _NSRange pixelsWideRange; // ivar: _pixelsWideRange
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSUInteger)locationClosestTo:(NSUInteger)arg0 inRange:(struct _NSRange )arg1 ;
+(id)closestImageSizeInArray:(id)arg0 toImageSize:(id)arg1 preferDownScaling:(BOOL)arg2 ;
+(id)closestImageSizeInPixelsWideRange:(struct _NSRange )arg0 pixelsHighRange:(struct _NSRange )arg1 toImageSize:(id)arg2 preferInputAspectRatio:(BOOL)arg3 ;
-(BOOL)isAllowedImageSize:(id)arg0 error:(*id)arg1 ;
-(id)allowedImageSizeClosestToPixelsWide:(NSInteger)arg0 pixelsHigh:(NSInteger)arg1 preferDownScaling:(BOOL)arg2 preferInputAspectRatio:(BOOL)arg3 ;
-(id)initUnspecified;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnumeratedImageSizes:(id)arg0 ;
-(id)initWithPixelsWideRange:(struct _NSRange )arg0 pixelsHighRange:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif