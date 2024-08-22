// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXCLOCKLAYOUTRESULT_H
#define _PIPARALLAXCLOCKLAYOUTRESULT_H

@class NURenderResult, NSString;
@protocol PIParallaxClockLayoutResult, NURenderStatistics;



@interface _PIParallaxClockLayoutResult : NURenderResult <PIParallaxClockLayoutResult>



@property (nonatomic) BOOL clockIntersectsForeground; // ivar: _clockIntersectsForeground
@property (retain, nonatomic) NSString *clockLayerOrder; // ivar: _clockLayerOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif