// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBFRAMEPRIVATE_H
#define WEBFRAMEPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebFramePrivate : NSObject {
    NakedPtr<WebCore::Frame> coreFrame;
    RetainPtr<WebFrameView> webFrameView;
    unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> scriptDebugger;
    id *internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    RetainPtr<NSString> url;
    RetainPtr<NSString> provisionalURL;
    BOOL isCommitting;
}




-(void)setWebFrameView:(id)arg0 ;


@end


#endif