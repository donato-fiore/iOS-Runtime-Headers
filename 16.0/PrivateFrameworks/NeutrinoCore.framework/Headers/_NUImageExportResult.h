// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIMAGEEXPORTRESULT_H
#define _NUIMAGEEXPORTRESULT_H

@class NUExportResult, NSString, NSData, NSURL;
@protocol NUImageExportResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUImageExportResult : NUExportResult <NUImageExportResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *destinationData; // ivar: _destinationData
@property (retain) NSURL *destinationURL;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif