// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTRANSFORM3DGRADER_H
#define UISTRANSFORM3DGRADER_H


#import <Foundation/Foundation.h>


@interface UISTransform3DGrader : NSObject {
    vector<double, std::allocator<double>> _allowedRotations;
    vector<double, std::allocator<double>> _allowedScales;
    vector<double, std::allocator<double>> _allowedSkews;
}




-(NSUInteger)gradeTransform3D:(struct CATransform3D )arg0 ;
-(id)init;
-(void)allowRotations:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(void)allowRotations:(*CGFloat)arg0 count:(NSUInteger)arg1 lowerMultiplier:(CGFloat)arg2 lowerConstant:(CGFloat)arg3 upperMultiplier:(CGFloat)arg4 upperConstant:(CGFloat)arg5 ;
-(void)allowScales:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(void)allowScales:(*CGFloat)arg0 count:(NSUInteger)arg1 lowerMultiplier:(CGFloat)arg2 lowerConstant:(CGFloat)arg3 upperMultiplier:(CGFloat)arg4 upperConstant:(CGFloat)arg5 ;
-(void)allowSkews:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(void)allowSkews:(*CGFloat)arg0 count:(NSUInteger)arg1 lowerMultiplier:(CGFloat)arg2 lowerConstant:(CGFloat)arg3 upperMultiplier:(CGFloat)arg4 upperConstant:(CGFloat)arg5 ;


@end


#endif