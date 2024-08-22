// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APWEBVIEWCONFIGURATION_H
#define APWEBVIEWCONFIGURATION_H

@class WKWebViewConfiguration, APUnfairLock;

#import <Foundation/Foundation.h>


@interface APWebViewConfiguration : NSObject {
    WKWebViewConfiguration *_webProcessConfiguration;
    WKWebViewConfiguration *_webProcessConfigurationWithBackgroundPriority;
    WKWebViewConfiguration *_videoConfiguration;
    WKWebViewConfiguration *_videoConfigurationWithBackgroundPriority;
}


@property (readonly, nonatomic) WKWebViewConfiguration *videoConfiguration;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationLock; // ivar: _videoConfigurationLock
@property (readonly, nonatomic) WKWebViewConfiguration *videoConfigurationWithBackgroundPriority;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationWithBackgroundPriorityLock; // ivar: _videoConfigurationWithBackgroundPriorityLock
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfiguration;
@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationLock; // ivar: _webProcessConfigurationLock
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfigurationWithBackgroundPriority;
@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationWithBackgroundPriorityLock; // ivar: _webProcessConfigurationWithBackgroundPriorityLock


-(id)_injectionScriptForResource:(id)arg0 injectionTime:(NSInteger)arg1 ;
-(id)_injectionStyleForResource:(id)arg0 ;
-(id)_newProcessPoolWithBackgroundPriority:(BOOL)arg0 ;
-(id)_newSharedConfigurationWithBackgroundPriority:(BOOL)arg0 ;
-(id)init;


@end


#endif