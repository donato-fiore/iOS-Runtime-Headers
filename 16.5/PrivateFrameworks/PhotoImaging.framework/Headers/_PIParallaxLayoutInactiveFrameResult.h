// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXLAYOUTINACTIVEFRAMERESULT_H
#define _PIPARALLAXLAYOUTINACTIVEFRAMERESULT_H

@class NURenderResult, NSString;
@protocol PIParallaxLayoutInactiveFrameResult, NURenderStatistics;



@interface _PIParallaxLayoutInactiveFrameResult : NURenderResult <PIParallaxLayoutInactiveFrameResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect inactiveRect; // ivar: _inactiveRect
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif