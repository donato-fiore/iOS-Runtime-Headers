// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYSCENEMETRICS_H
#define ACUISACTIVITYSCENEMETRICS_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface ACUISActivitySceneMetrics : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)_ActivitySceneMetrics;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSceneMetrics:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif