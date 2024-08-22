// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTWINDOWCOORDINATESPACECONVERTER_H
#define RPTWINDOWCOORDINATESPACECONVERTER_H

@class UIScreen, UIWindow;


#import "RPTCoordinateSpaceConverter.h"

@interface RPTWindowCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) id *nsScreen; // ivar: _nsScreen
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)initFromWindow:(id)arg0 toScreen:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 ;
-(struct CGSize )convertSize:(struct CGSize )arg0 ;
-(struct CGVector )convertVector:(struct CGVector )arg0 ;


@end


#endif