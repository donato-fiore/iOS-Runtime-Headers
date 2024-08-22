// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDANIMATETIMEBEHAVIOR_H
#define PDANIMATETIMEBEHAVIOR_H

@class NSString;


#import "PDAnimateBehavior.h"

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    BOOL mHasCalcMode;
    int mCalcMode;
    BOOL mHasValueType;
    int mValueType;
}




-(BOOL)hasCalcMode;
-(BOOL)hasValueType;
-(id)by;
-(id)from;
-(id)init;
-(id)to;
-(int)calcMode;
-(int)valueType;
-(void)setBy:(id)arg0 ;
-(void)setCalcMode:(int)arg0 ;
-(void)setFrom:(id)arg0 ;
-(void)setTo:(id)arg0 ;
-(void)setValueType:(int)arg0 ;


@end


#endif