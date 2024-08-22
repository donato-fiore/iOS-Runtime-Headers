// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADFILLOVERLAYEFFECT_H
#define OADFILLOVERLAYEFFECT_H



#import "OADEffect.h"
#import "OADFill.h"

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fill;
-(id)init;
-(int)blendMode;
-(void)setBlendMode:(int)arg0 ;
-(void)setFill:(id)arg0 ;


@end


#endif