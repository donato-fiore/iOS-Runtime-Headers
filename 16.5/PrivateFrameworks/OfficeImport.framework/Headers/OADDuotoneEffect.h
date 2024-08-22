// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADDUOTONEEFFECT_H
#define OADDUOTONEEFFECT_H



#import "OADBlipEffect.h"
#import "OADColor.h"

@interface OADDuotoneEffect : OADBlipEffect {
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)color1;
-(id)color2;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(int)transferMode1;
-(int)transferMode2;
-(void)setColor1:(id)arg0 ;
-(void)setColor2:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setTransferMode1:(int)arg0 ;
-(void)setTransferMode2:(int)arg0 ;


@end


#endif