// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BCUCOVEREFFECTSSHADOW_H
#define _BCUCOVEREFFECTSSHADOW_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _BCUCoverEffectsShadow : NSObject

@property (readonly, nonatomic) NSString *blendMode; // ivar: _blendMode
@property (readonly, nonatomic) *CGImage image; // ivar: _image
@property (readonly, nonatomic) UIEdgeInsets insets; // ivar: _insets


-(id)initWithImage:(struct CGImage *)arg0 insets:(struct UIEdgeInsets )arg1 ;
-(id)initWithImage:(struct CGImage *)arg0 insets:(struct UIEdgeInsets )arg1 blendMode:(id)arg2 ;
-(struct CGRect )contentsCenter;
-(struct CGSize )size;
-(struct UIEdgeInsets )roundedInsetsWithSize:(struct CGSize )arg0 ;


@end


#endif