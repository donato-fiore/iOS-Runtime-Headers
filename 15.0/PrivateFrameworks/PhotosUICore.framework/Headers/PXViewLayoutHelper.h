// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIEWLAYOUTHELPER_H
#define PXVIEWLAYOUTHELPER_H

@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface PXViewLayoutHelper : NSObject {
    CGRect _containerBounds;
    id<UICoordinateSpace> *_coordinateSpace;
    CGAffineTransform _transform;
    CGAffineTransform _reverseTransform;
}




+(NSInteger)userInterfaceLayoutDirection;
+(void)initialize;
+(void)performLayoutWithinView:(id)arg0 usingBlock:(id)arg1 ;
+(void)setUserInterfaceLayoutDirection:(NSInteger)arg0 ;
-(CGFloat)bottomOfView:(id)arg0 ;
-(CGFloat)firstBaselineOfView:(id)arg0 ;
-(CGFloat)horizontalCenterOfView:(id)arg0 ;
-(CGFloat)lastBaselineOfView:(id)arg0 ;
-(CGFloat)leadingOfView:(id)arg0 ;
-(CGFloat)topOfView:(id)arg0 ;
-(CGFloat)trailingOfView:(id)arg0 ;
-(CGFloat)verticalCenterOfView:(id)arg0 ;
-(id)_init;
-(id)init;
-(struct CGRect )_orientedFrameOfView:(id)arg0 ;
-(void)_getFirstBaseline:(*CGFloat)arg0 lastBaseline:(*CGFloat)arg1 forView:(id)arg2 withSize:(struct CGSize )arg3 ;
-(void)_setOrientedFrame:(struct CGRect )arg0 forView:(id)arg1 ;
-(void)_setUpWithView:(id)arg0 ;
-(void)_tearDown;
-(void)layoutView:(id)arg0 withAttributes:(struct ? *)arg1 ;


@end


#endif