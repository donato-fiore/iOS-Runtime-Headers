// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUTOCROPPER_H
#define AUTOCROPPER_H


#import <Foundation/Foundation.h>


@interface AutoCropper : NSObject

@property (nonatomic) CGSize originalImageSize; // ivar: originalImageSize
@property (nonatomic) BOOL shouldFavorBottom; // ivar: shouldFavorBottom
@property (nonatomic) BOOL shouldFavorTop; // ivar: shouldFavorTop


-(id)clusterRects:(id)arg0 ;
-(id)init;
-(int)determineBestPositionWithinSize:(struct CGSize )arg0 forImportantRect:(struct CGRect )arg1 restrictRect:(struct CGRect )arg2 ;
-(int)getRatioOfSize:(struct CGSize )arg0 ;
-(struct CGRect )computeClippingWithinSize:(struct CGSize )arg0 andImportantRect:(struct CGRect )arg1 ;
-(struct CGRect )computeClippingWithinSize:(struct CGSize )arg0 andImportantRects:(id)arg1 ;
-(struct CGRect )computeClippingWithinSize:(struct CGSize )arg0 forImportantRect:(struct CGRect )arg1 andType:(int)arg2 restrictRect:(struct CGRect )arg3 ;
-(struct CGRect )computeClippingWithinSize:(struct CGSize )arg0 forMultipleRects:(id)arg1 ;
-(struct CGRect )expandRect:(struct CGRect )arg0 toContainRect:(struct CGRect )arg1 ;
-(struct CGRect )rectContainingRect:(struct CGRect )arg0 andOtherRect:(struct CGRect )arg1 ;
-(struct CGRect )rectWithSize:(struct CGSize )arg0 andPoint:(struct CGPoint )arg1 inPosition:(int)arg2 fromOriginalSize:(struct CGSize )arg3 ;
-(struct CGRect )scaleRect:(struct CGRect )arg0 byScale:(CGFloat)arg1 ;
-(struct CGRect )scaleRect:(struct CGRect )arg0 toFitSize:(struct CGSize )arg1 withAnchorPoint:(struct CGPoint )arg2 ;


@end


#endif