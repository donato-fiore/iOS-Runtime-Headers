// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCIMAGERENDERER_H
#define ASCIMAGERENDERER_H


#import <Foundation/Foundation.h>


@interface ASCImageRenderer : NSObject

@property (readonly, nonatomic) UIEdgeInsets capInsets; // ivar: _capInsets
@property (readonly, nonatomic) NSInteger renderingMode; // ivar: _renderingMode
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)bundleImageNamed:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)systemImageNamed:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)imageWithActions:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 capInsets:(struct UIEdgeInsets )arg1 renderingMode:(NSInteger)arg2 ;


@end


#endif