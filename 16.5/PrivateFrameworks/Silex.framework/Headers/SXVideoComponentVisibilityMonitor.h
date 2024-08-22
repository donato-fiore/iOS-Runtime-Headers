// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOCOMPONENTVISIBILITYMONITOR_H
#define SXVIDEOCOMPONENTVISIBILITYMONITOR_H

@class NSString;
@protocol SXScrollObserving;


#import "SXVisibilityMonitor.h"

@interface SXVideoComponentVisibilityMonitor : SXVisibilityMonitor <SXScrollObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didScroll;
-(void)scrollingDidStop;
-(void)scrollingWillStart;


@end


#endif