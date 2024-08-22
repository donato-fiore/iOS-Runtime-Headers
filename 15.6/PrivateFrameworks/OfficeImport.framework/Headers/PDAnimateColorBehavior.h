// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDANIMATECOLORBEHAVIOR_H
#define PDANIMATECOLORBEHAVIOR_H



#import "PDAnimateBehavior.h"
#import "OADColor.h"

@interface PDAnimateColorBehavior : PDAnimateBehavior {
    BOOL mHasBy;
    CGFloat mBy;
    BOOL mHasFrom;
    OADColor *mFrom;
    BOOL mHasTo;
    OADColor *mTo;
    BOOL mHasColorSpace;
    int mColorSpace;
    BOOL mHasColorDirection;
    int mDirection;
}




-(*CGFloat)by;
-(BOOL)hasBy;
-(BOOL)hasColorDirection;
-(BOOL)hasColorSpace;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(id)from;
-(id)to;
-(int)colorSpace;
-(int)direction;
-(void)setBy:(CGFloat)arg0 ;
-(void)setColorSpace:(int)arg0 ;
-(void)setDirection:(int)arg0 ;
-(void)setFrom:(id)arg0 ;
-(void)setTo:(id)arg0 ;


@end


#endif