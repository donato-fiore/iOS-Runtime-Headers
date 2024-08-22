// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCREENSHOTFLASHER_H
#define DBSCREENSHOTFLASHER_H

@class NSMutableArray, UIWindow, UIView, UIWindowScene;

#import <Foundation/Foundation.h>


@interface DBScreenshotFlasher : NSObject {
    NSMutableArray *_flashCompletionBlocks;
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}


@property (readonly, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(id)initWithWindowScene:(id)arg0 ;
-(void)_createUIWithColor:(id)arg0 ;
-(void)_orderWindowFrontAndThenOut:(id)arg0 withColor:(id)arg1 ;
-(void)_orderWindowOut:(id)arg0 ;
-(void)_tearDown;
-(void)flashColor:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif