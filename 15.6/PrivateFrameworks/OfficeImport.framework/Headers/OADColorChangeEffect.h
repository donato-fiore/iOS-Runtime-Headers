// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADCOLORCHANGEEFFECT_H
#define OADCOLORCHANGEEFFECT_H



#import "OADBlipEffect.h"
#import "OADColor.h"

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fromColor;
-(id)init;
-(id)toColor;
-(void)setFromColor:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setToColor:(id)arg0 ;


@end


#endif