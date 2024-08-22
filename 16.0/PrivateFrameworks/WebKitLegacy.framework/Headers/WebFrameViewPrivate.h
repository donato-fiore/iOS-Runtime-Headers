// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBFRAMEVIEWPRIVATE_H
#define WEBFRAMEVIEWPRIVATE_H


#import <Foundation/Foundation.h>

#import "WebFrame.h"

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    RetainPtr<WAKScrollView> frameScrollView;
    BOOL includedInWebKitStatistics;
}






@end


#endif