// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUVIDEOPLAYBACKFRAMEREQUESTRESPONSE_H
#define _NUVIDEOPLAYBACKFRAMEREQUESTRESPONSE_H

@class NURenderResult, NSString;
@protocol NUVideoPlaybackFrameResult, NURenderStatistics;



@interface _NUVideoPlaybackFrameRequestResponse : NURenderResult <NUVideoPlaybackFrameResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) *__CVBuffer frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif