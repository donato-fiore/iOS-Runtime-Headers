// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBLUREFFECTMODERNIMPL_H
#define _UIBLUREFFECTMODERNIMPL_H

@class UIBlurEffectImpl;



@interface _UIBlurEffectModernImpl : UIBlurEffectImpl {
    CGFloat _blurRadius;
    CGFloat _blurScale;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBlurRadius:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif