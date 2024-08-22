// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHVIDEOASSETWRITER_H
#define PHVIDEOASSETWRITER_H

@class AVAssetExportSession;


#import "PHAssetWriter.h"

@interface PHVideoAssetWriter : PHAssetWriter

@property (retain, nonatomic) AVAssetExportSession *exportSession; // ivar: _exportSession


-(NSUInteger)_estimatedOutputSizeWithError:(*id)arg0 ;
-(NSUInteger)estimatedOutputSizeWithError:(*id)arg0 ;
-(id)request;
-(id)requestWithNetworkAccess:(BOOL)arg0 ;
-(id)transfer;


@end


#endif