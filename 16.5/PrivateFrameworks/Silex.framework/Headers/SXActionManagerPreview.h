// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXACTIONMANAGERPREVIEW_H
#define SXACTIONMANAGERPREVIEW_H

@class UIViewController;
@protocol SXAction, SXActionPreviewActivity;

#import <Foundation/Foundation.h>


@interface SXActionManagerPreview : NSObject {
    id<SXAction> *_action;
    id<SXActionPreviewActivity> *_previewActivity;
    UIViewController *_viewController;
}






@end


#endif