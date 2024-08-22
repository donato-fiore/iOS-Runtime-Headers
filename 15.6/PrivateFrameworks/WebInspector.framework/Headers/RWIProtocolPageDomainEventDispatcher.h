// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLPAGEDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLPAGEDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolPageDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)defaultAppearanceDidChangeWithAppearance:(NSInteger)arg0 ;
-(void)domContentEventFiredWithTimestamp:(CGFloat)arg0 ;
-(void)frameClearedScheduledNavigationWithFrameId:(id)arg0 ;
-(void)frameDetachedWithFrameId:(id)arg0 ;
-(void)frameNavigatedWithFrame:(id)arg0 ;
-(void)frameScheduledNavigationWithFrameId:(id)arg0 delay:(CGFloat)arg1 ;
-(void)frameStartedLoadingWithFrameId:(id)arg0 ;
-(void)frameStoppedLoadingWithFrameId:(id)arg0 ;
-(void)loadEventFiredWithTimestamp:(CGFloat)arg0 ;


@end


#endif