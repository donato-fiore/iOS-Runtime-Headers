// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCREENFLASH_H
#define SBSCREENFLASH_H

@class NSMutableArray, UIScreen, UIWindow, UIView;

#import <Foundation/Foundation.h>


@interface SBScreenFlash : NSObject {
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}




+(id)mainScreenFlasher;
-(id)initWithScreen:(id)arg0 ;
-(void)_createUIWithColor:(id)arg0 ;
-(void)_orderWindowFrontAndThenOut:(id)arg0 withColor:(id)arg1 ;
-(void)_orderWindowOut:(id)arg0 ;
-(void)_tearDown;
-(void)flashColor:(id)arg0 withCompletion:(id)arg1 ;
-(void)flashWhiteWithCompletion:(id)arg0 ;


@end


#endif