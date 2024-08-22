// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTWOCELLANCHOR_H
#define EDTWOCELLANCHOR_H



#import "EDAnchor.h"

@interface EDTwoCellAnchor : EDAnchor {
    EDCellAnchorMarker mFrom;
    EDCellAnchorMarker mTo;
    BOOL mIsRelative;
    int mEditAs;
}




-(BOOL)isRelative;
-(id)init;
-(int)editAs;
-(struct EDCellAnchorMarker )from;
-(struct EDCellAnchorMarker )to;
-(void)setEditAs:(int)arg0 ;
-(void)setFrom:(struct EDCellAnchorMarker )arg0 ;
-(void)setRelative:(BOOL)arg0 ;
-(void)setTo:(struct EDCellAnchorMarker )arg0 ;


@end


#endif