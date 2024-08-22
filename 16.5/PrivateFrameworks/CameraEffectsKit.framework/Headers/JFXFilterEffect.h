// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXFILTEREFFECT_H
#define JFXFILTEREFFECT_H



#import "JFXEffect.h"

@interface JFXFilterEffect : JFXEffect



+(BOOL)supportsSecureCoding;
-(BOOL)enablePresentationState:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filterContentDataSource;
-(id)initWithCoder:(id)arg0 ;
-(id)renderEffect;
-(int)type;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setForceRenderAtPosterFrame:(BOOL)arg0 ;


@end


#endif