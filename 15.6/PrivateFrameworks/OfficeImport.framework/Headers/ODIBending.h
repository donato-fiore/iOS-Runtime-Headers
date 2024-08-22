// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIBENDING_H
#define ODIBENDING_H


#import <Foundation/Foundation.h>


@interface ODIBending : NSObject {
    float mSpaceWidth;
    float mSpaceHeight;
    BOOL mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}




+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
+(unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize )arg0 spaceSize:(struct CGSize )arg1 maxNodeCount:(unsigned int)arg2 maxColumnCount:(unsigned int)arg3 state:(id)arg4 ;
-(id)initWithArrows:(BOOL)arg0 ;
-(void)mapWithState:(id)arg0 ;
-(void)setMaxColumnCount:(unsigned int)arg0 ;
-(void)setMaxNodeCount:(unsigned int)arg0 ;
-(void)setRectHeight:(float)arg0 ;


@end


#endif