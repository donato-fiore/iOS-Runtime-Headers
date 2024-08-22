// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDTRANSITION_H
#define PDTRANSITION_H

@class NSNumber;


#import "OADProperties.h"
#import "PDTransitionOptions.h"

@interface PDTransition : OADProperties {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}


@property (retain, nonatomic) NSNumber *duration; // ivar: duration


-(BOOL)hasAdvanceAfterTime;
-(BOOL)hasIsAdvanceOnClick;
-(BOOL)hasSpeed;
-(BOOL)hasTransitionOptions;
-(BOOL)hasType;
-(BOOL)isAdvanceOnClick;
-(id)description;
-(id)init;
-(id)options;
-(int)advanceAfterTime;
-(int)speed;
-(int)type;
-(void)setAdvanceAfterTime:(int)arg0 ;
-(void)setIsAdvanceOnClick:(BOOL)arg0 ;
-(void)setOptions:(id)arg0 ;
-(void)setSpeed:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif