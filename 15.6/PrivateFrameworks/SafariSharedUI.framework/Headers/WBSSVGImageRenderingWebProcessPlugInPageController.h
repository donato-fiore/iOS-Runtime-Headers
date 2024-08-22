// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSVGIMAGERENDERINGWEBPROCESSPLUGINPAGECONTROLLER_H
#define WBSSVGIMAGERENDERINGWEBPROCESSPLUGINPAGECONTROLLER_H

@protocol WBSSVGImageRenderingObserver;


#import "WBSWebProcessPlugInPageController.h"

@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSSVGImageRenderingObserver> *_svgImageRenderingObserver;
}




-(id)svgImageRenderingObserver;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishLoadForFrame:(id)arg1 ;


@end


#endif