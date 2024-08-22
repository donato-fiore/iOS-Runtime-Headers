// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVWINDOWSIZEADAPTOR_H
#define _TVWINDOWSIZEADAPTOR_H

@class UIWindow;

#import <Foundation/Foundation.h>


@interface _TVWindowSizeAdaptor : NSObject {
    NSUInteger _allowedInterfaceOrientations;
}


@property (readonly, nonatomic) CGSize adjustedWindowSize;
@property (readonly, weak, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)_shouldSwapDimensions;
-(BOOL)update;
-(NSUInteger)_supportedOrientations;
-(id)initWithWindow:(id)arg0 ;


@end


#endif