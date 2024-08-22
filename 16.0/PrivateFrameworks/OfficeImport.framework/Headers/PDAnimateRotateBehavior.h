// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDANIMATEROTATEBEHAVIOR_H
#define PDANIMATEROTATEBEHAVIOR_H



#import "PDAnimateBehavior.h"

@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    CGFloat mTo;
    CGFloat mFrom;
    CGFloat mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}




-(BOOL)hasBy;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(CGFloat)by;
-(CGFloat)from;
-(CGFloat)to;
-(id)init;
-(void)setBy:(CGFloat)arg0 ;
-(void)setFrom:(CGFloat)arg0 ;
-(void)setTo:(CGFloat)arg0 ;


@end


#endif