// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICLIENTCONTEXTPREVIEWCONTAINER_H
#define SKUICLIENTCONTEXTPREVIEWCONTAINER_H

@class IKJSObject;
@protocol SKUIClientContextPreviewContainer;


#import "SKUIClientContext.h"
#import "SKUIPreviewContainerViewController.h"

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer>

 {
    SKUIClientContext *_clientContext;
    SKUIPreviewContainerViewController *_previewContainerViewController;
}




-(id)initWithAppContext:(id)arg0 clientContext:(id)arg1 previewContainerViewController:(id)arg2 ;
-(void)previewDocument:(id)arg0 ;


@end


#endif