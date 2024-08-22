// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUHISTOGRAMRENDERRESULT_H
#define _NUHISTOGRAMRENDERRESULT_H

@class NURenderResult, NSString;
@protocol NUHistogramRenderResult, NURenderStatistics;


#import "NUImageHistogram.h"

@interface _NUHistogramRenderResult : NURenderResult <NUHistogramRenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NUImageHistogram *histogram; // ivar: _histogram
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(id)initWithHistogram:(id)arg0 ;


@end


#endif