// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODDITERATORATTRIBUTES_H
#define ODDITERATORATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}




-(BOOL)hideLastTransition;
-(int)axis;
-(int)pointType;
-(int)start;
-(int)step;
-(unsigned int)count;
-(void)setAxis:(int)arg0 ;
-(void)setCount:(unsigned int)arg0 ;
-(void)setHideLastTransition:(BOOL)arg0 ;
-(void)setPointType:(int)arg0 ;
-(void)setStart:(int)arg0 ;
-(void)setStep:(int)arg0 ;


@end


#endif