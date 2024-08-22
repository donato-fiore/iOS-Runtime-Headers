// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSCREENCAPTURERSCREENSHOTOPTIONSCOLLECTION_H
#define SSSCREENCAPTURERSCREENSHOTOPTIONSCOLLECTION_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SSScreenCapturerScreenshotOptionsCollection : NSObject {
    NSMapTable *_screenToScreenshotOptions;
}




-(id)screenshotOptionsForScreen:(id)arg0 ;
-(void)setScreenshotOptions:(id)arg0 forScreen:(id)arg1 ;


@end


#endif