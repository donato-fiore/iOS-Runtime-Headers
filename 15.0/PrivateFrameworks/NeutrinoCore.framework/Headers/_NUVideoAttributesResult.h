// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUVIDEOATTRIBUTESRESULT_H
#define _NUVIDEOATTRIBUTESRESULT_H

@class NURenderResult, NSString;
@protocol NUVideoAttributesResult, NURenderStatistics;


#import "NUVideoAttributes.h"

@interface _NUVideoAttributesResult : NURenderResult <NUVideoAttributesResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (retain, nonatomic) NUVideoAttributes *videoAttributes; // ivar: _videoAttributes




@end


#endif