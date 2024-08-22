// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUEXPORTRESULT_H
#define _NUEXPORTRESULT_H

@class NURenderResult, NSString, NSURL;
@protocol NUExportResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUExportResult : NURenderResult <NUExportResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURL *destinationURL; // ivar: _destinationURL
@property (retain) NUImageGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif