// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUIMAGERENDERRESULT_H
#define _NUIMAGERENDERRESULT_H

@class NURenderResult, NSString;
@protocol NUImageRenderResult, NURenderStatistics;


#import "NUImageGeometry.h"
#import "NURegion.h"

@interface _NUImageRenderResult : NURenderResult <NUImageRenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (retain) NURegion *region; // ivar: _region
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif