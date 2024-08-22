// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCREENBOUNDINGPATHUTILITIES_H
#define _UISCREENBOUNDINGPATHUTILITIES_H


#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface _UIScreenBoundingPathUtilities : NSObject

@property (weak, nonatomic, getter=_screen) UIScreen *screen; // ivar: _screen


+(id)boundingPathUtilitiesForScreen:(id)arg0 ;
-(id)boundingPathForWindow:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;


@end


#endif