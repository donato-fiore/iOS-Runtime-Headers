// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODILINEAR_H
#define ODILINEAR_H


#import <Foundation/Foundation.h>

#import "ODIState.h"

@interface ODILinear : NSObject {
    BOOL mIsHorizontal;
    BOOL mWithConnectors;
    BOOL mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    BOOL mIsTextCenteredHorizontally;
    BOOL mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}




+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
+(void)mapUnknownWithState:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(void)map;
-(void)mapPoint:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)mapStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)mapStyleFromTransition:(id)arg0 shape:(id)arg1 ;
-(void)mapTransition:(id)arg0 pointBounds:(struct CGRect )arg1 ;
-(void)nextPointBounds:(struct CGRect *)arg0 ;
-(void)setConnectorWidth:(float)arg0 ;
-(void)setIsHorizontal:(BOOL)arg0 ;
-(void)setIsTextCentered:(BOOL)arg0 ;
-(void)setIsTextCenteredHorizontally:(BOOL)arg0 ;
-(void)setIsTextCenteredVertically:(BOOL)arg0 ;
-(void)setLogicalBounds;
-(void)setMaxPointCount:(unsigned int)arg0 ;
-(void)setPadding:(float)arg0 ;
-(void)setPointHeight:(float)arg0 ;
-(void)setStretch:(BOOL)arg0 ;
-(void)setWithConnectors:(BOOL)arg0 ;


@end


#endif