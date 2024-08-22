// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBDEFAULTSCREENSHOTPROVIDER_H
#define _SBDEFAULTSCREENSHOTPROVIDER_H

@class NSString, UIScreen;
@protocol _SBScreenshotProvider;

#import <Foundation/Foundation.h>

#import "SBScreenFlash.h"

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBScreenFlash *flasher; // ivar: _flasher
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly) Class superclass;


-(id)captureScreenshot;
-(id)initWithScreen:(id)arg0 ;


@end


#endif