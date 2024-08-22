// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTVIEWCOORDINATESPACECONVERTER_H
#define RPTVIEWCOORDINATESPACECONVERTER_H

@class UIView;


#import "RPTCoordinateSpaceConverter.h"

@interface RPTViewCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) UIView *view; // ivar: _view


-(id)initFromView:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 ;
-(struct CGSize )convertSize:(struct CGSize )arg0 ;
-(struct CGVector )convertVector:(struct CGVector )arg0 ;


@end


#endif