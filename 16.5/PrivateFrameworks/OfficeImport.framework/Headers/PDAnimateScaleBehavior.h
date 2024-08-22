// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDANIMATESCALEBEHAVIOR_H
#define PDANIMATESCALEBEHAVIOR_H



#import "PDAnimateBehavior.h"

@interface PDAnimateScaleBehavior : PDAnimateBehavior {
    CGPoint mTo;
    CGPoint mFrom;
    CGPoint mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}




-(BOOL)hasBy;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(struct CGPoint )by;
-(struct CGPoint )from;
-(struct CGPoint )to;
-(void)setBy:(struct CGPoint )arg0 ;
-(void)setFrom:(struct CGPoint )arg0 ;
-(void)setTo:(struct CGPoint )arg0 ;


@end


#endif