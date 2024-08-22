// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEGRIDSIZER_H
#define PXPEOPLEGRIDSIZER_H


#import <Foundation/Foundation.h>


@interface PXPeopleGridSizer : NSObject



+(CGFloat)marginForGridClass:(NSInteger)arg0 width:(CGFloat)arg1 ;
+(NSUInteger)numberOfColumnsForGridClass:(NSInteger)arg0 width:(CGFloat)arg1 ;
+(id)_gridCColumnInterpolator;
+(id)_gridCGutterInterpolator;
+(id)_gridCMarginInterpolator;
+(struct CGSize )cellSizeForGridClass:(NSInteger)arg0 width:(CGFloat)arg1 ;


@end


#endif