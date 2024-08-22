// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSCREENSNAPSHOT_H
#define SSSCREENSNAPSHOT_H

@class UIImage, UIScreen;

#import <Foundation/Foundation.h>


@interface SSScreenSnapshot : NSObject {
    UIImage *_image;
    UIScreen *_screen;
}


@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIScreen *screen;


+(id)snapshotWithImage:(id)arg0 fromScreen:(id)arg1 ;


@end


#endif