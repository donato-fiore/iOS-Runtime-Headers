// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXINFILLRESULT_H
#define _PIPARALLAXINFILLRESULT_H

@class NURenderResult, NSString;
@protocol PIParallaxInfillResult, NUImageBuffer, NURenderStatistics;



@interface _PIParallaxInfillResult : NURenderResult <PIParallaxInfillResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NUImageBuffer> *infilledImage; // ivar: _infilledImage
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif