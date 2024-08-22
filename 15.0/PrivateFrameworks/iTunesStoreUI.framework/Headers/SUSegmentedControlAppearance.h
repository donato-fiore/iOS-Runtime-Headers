// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSEGMENTEDCONTROLAPPEARANCE_H
#define SUSEGMENTEDCONTROLAPPEARANCE_H

@class NSMutableDictionary, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUControlAppearance.h"

@interface SUSegmentedControlAppearance : NSObject <NSCopying>

 {
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_titleTextAttributes;
}


@property (retain, nonatomic) UIImage *optionsBackgroundImage; // ivar: _optionsBackgroundImage


+(id)defaultBarAppearance;
+(id)defaultOptionsAppearanceForTintStyle:(NSInteger)arg0 ;
-(id)_newDividerImageKeyWithLeftState:(NSUInteger)arg0 rightState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(id)backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)styleSegmentedControl:(id)arg0 ;


@end


#endif