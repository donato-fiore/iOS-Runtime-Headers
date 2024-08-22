// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUTOOLBARAPPEARANCE_H
#define SUTOOLBARAPPEARANCE_H

@class NSMutableDictionary, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUToolbarAppearance : NSObject <NSCopying>

 {
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
}


@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)defaultToolbarAppearance;
-(id)backgroundImageForPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)shadowImageForPosition:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateBackgroundImagesUsingBlock:(id)arg0 ;
-(void)enumerateShadowImagesUsingBlock:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setShadowImage:(id)arg0 forPosition:(NSInteger)arg1 ;
-(void)styleToolbar:(id)arg0 ;


@end


#endif