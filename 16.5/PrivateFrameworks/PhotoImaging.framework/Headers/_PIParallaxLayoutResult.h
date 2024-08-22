// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXLAYOUTRESULT_H
#define _PIPARALLAXLAYOUTRESULT_H

@class NURenderResult, NSString, PFParallaxLayout, NSDictionary;
@protocol PIParallaxLayoutResult, NURenderStatistics;



@interface _PIParallaxLayoutResult : NURenderResult <PIParallaxLayoutResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (copy, nonatomic) NSDictionary *scores; // ivar: _scores
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif