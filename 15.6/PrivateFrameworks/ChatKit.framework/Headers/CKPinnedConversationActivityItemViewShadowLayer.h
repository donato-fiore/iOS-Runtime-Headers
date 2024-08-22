// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONACTIVITYITEMVIEWSHADOWLAYER_H
#define CKPINNEDCONVERSATIONACTIVITYITEMVIEWSHADOWLAYER_H

@class CAShapeLayer;



@interface CKPinnedConversationActivityItemViewShadowLayer : CAShapeLayer

@property (readonly, nonatomic) NSInteger shadowType; // ivar: _shadowType
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


-(CGFloat)_opacityForShadowStyle:(NSInteger)arg0 ;
-(CGFloat)_radiusForShadowStyle:(NSInteger)arg0 ;
-(NSInteger)_shadowStyleForShadowType:(NSInteger)arg0 userInterfaceStyle:(NSInteger)arg1 ;
-(id)initWithShadowType:(NSInteger)arg0 ;
-(struct CGSize )_offsetForShadowStyle:(NSInteger)arg0 ;
-(void)_updateShadowProperties;


@end


#endif