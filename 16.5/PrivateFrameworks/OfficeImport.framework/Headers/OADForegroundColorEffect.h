// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADFOREGROUNDCOLOREFFECT_H
#define OADFOREGROUNDCOLOREFFECT_H



#import "OADBlipEffect.h"
#import "OADColor.h"

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)foregroundColor;
-(id)init;
-(void)setForegroundColor:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;


@end


#endif