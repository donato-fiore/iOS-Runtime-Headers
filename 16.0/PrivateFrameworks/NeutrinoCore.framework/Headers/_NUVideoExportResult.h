// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUVIDEOEXPORTRESULT_H
#define _NUVIDEOEXPORTRESULT_H

@class NUExportResult, NSString, NSURL;
@protocol NUVideoExportResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUVideoExportResult : NUExportResult <NUVideoExportResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *destinationURL;
@property (copy, nonatomic) NSString *digest; // ivar: _digest
@property (readonly) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif