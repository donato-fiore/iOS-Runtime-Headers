// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDTHEMELOOK_H
#define TDTHEMELOOK_H



#import "TDThemeConstant.h"

@interface TDThemeLook : TDThemeConstant {
    BOOL _supportsContrastAdjustment;
}




-(BOOL)supportsContrastAdjustment;
-(void)setSupportsContrastAdjustment:(BOOL)arg0 ;


@end


#endif