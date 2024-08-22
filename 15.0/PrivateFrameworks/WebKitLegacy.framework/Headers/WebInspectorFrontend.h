// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBINSPECTORFRONTEND_H
#define WEBINSPECTORFRONTEND_H


#import <Foundation/Foundation.h>


@interface WebInspectorFrontend : NSObject {
    NakedPtr<WebInspectorFrontendClient> m_frontendClient;
}




-(BOOL)isDebuggingEnabled;
-(BOOL)isProfilingJavaScript;
-(BOOL)isTimelineProfilingEnabled;
-(id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> )arg0 ;
-(void)attach;
-(void)close;
-(void)detach;
-(void)setDebuggingEnabled:(BOOL)arg0 ;
-(void)setTimelineProfilingEnabled:(BOOL)arg0 ;
-(void)showConsole;
-(void)startProfilingJavaScript;
-(void)stopProfilingJavaScript;


@end


#endif