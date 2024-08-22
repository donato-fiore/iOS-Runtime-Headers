// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCREENMODE_H
#define UISCREENMODE_H

@class FBSDisplayMode;

#import <Foundation/Foundation.h>


@interface UIScreenMode : NSObject {
    FBSDisplayMode *_mode;
}


@property (getter=_isMainScreen, setter=_setMainScreen:) BOOL _mainScreen; // ivar: _mainScreen
@property (readonly, nonatomic) CGFloat pixelAspectRatio;
@property (readonly, nonatomic) CGSize size;


+(id)_screenModeForDisplayMode:(id)arg0 mainScreen:(BOOL)arg1 ;
-(id)_displayMode;
-(id)description;
-(id)initWithDisplayMode:(id)arg0 mainScreen:(BOOL)arg1 ;
-(struct CGSize )_sizeWithLevel:(NSUInteger)arg0 ;


@end


#endif