// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDONECELLANCHOR_H
#define EDONECELLANCHOR_H



#import "EDAnchor.h"

@interface EDOneCellAnchor : EDAnchor {
    EDCellAnchorMarker mFrom;
    CGSize mSize;
    BOOL mIsRelative;
}




-(BOOL)isRelative;
-(struct CGSize )size;
-(struct EDCellAnchorMarker )from;
-(void)setFrom:(struct EDCellAnchorMarker )arg0 ;
-(void)setRelative:(BOOL)arg0 ;
-(void)setSize:(struct CGSize )arg0 ;


@end


#endif