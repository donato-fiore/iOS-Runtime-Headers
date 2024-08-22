// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPEQUATIONFLOATINGLAYOUT_H
#define TSWPEQUATIONFLOATINGLAYOUT_H

@class TSDInfoGeometry, TSDLayoutGeometry;


#import "TSWPEquationLayout.h"

@interface TSWPEquationFloatingLayout : TSWPEquationLayout {
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}


@property (readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;


-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;


@end


#endif