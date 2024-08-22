// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKANNOTATIONVIEWANCHOR_H
#define _MKANNOTATIONVIEWANCHOR_H

@class VKAnchorWrapper;


#import "MKAnnotationView.h"

@interface _MKAnnotationViewAnchor : VKAnchorWrapper

@property (nonatomic) MKAnnotationView *annotationView; // ivar: _annotationView


-(CGFloat)pointOffsetForDistanceOffset:(CGFloat)arg0 ;
-(struct ? )coordinate;
-(struct CGPoint )pointInLayer:(id)arg0 bound:(struct CGRect )arg1 ;


@end


#endif