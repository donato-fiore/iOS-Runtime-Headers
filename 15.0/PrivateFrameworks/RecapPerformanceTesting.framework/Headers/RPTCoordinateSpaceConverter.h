// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPTCOORDINATESPACECONVERTER_H
#define RPTCOORDINATESPACECONVERTER_H

@class UIScreen, UIWindow;

#import <Foundation/Foundation.h>


@interface RPTCoordinateSpaceConverter : NSObject

@property (retain, nonatomic) id *nsScreen; // ivar: _nsScreen
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(id)identityConverter;
-(id)initFromWindow:(id)arg0 toScreen:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 ;
-(struct CGSize )convertSize:(struct CGSize )arg0 ;
-(struct CGVector )convertVector:(struct CGVector )arg0 ;


@end


#endif