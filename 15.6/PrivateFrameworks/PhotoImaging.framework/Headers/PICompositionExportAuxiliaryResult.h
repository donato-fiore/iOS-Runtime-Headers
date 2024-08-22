// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PICOMPOSITIONEXPORTAUXILIARYRESULT_H
#define PICOMPOSITIONEXPORTAUXILIARYRESULT_H

@class NSDictionary, NSData, NSURL;


#import "PICompositionExportResult.h"

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult

@property (retain) NSDictionary *auxiliaryImages; // ivar: _auxiliaryImages
@property BOOL canPropagateOriginalAuxiliaryData; // ivar: _canPropagateOriginalAuxiliaryData
@property (retain) NSData *companionImageData; // ivar: _companionImageData
@property (retain) NSURL *companionVideoURL; // ivar: _companionVideoURL
@property ? inputSize;
@property (copy) NSDictionary *properties; // ivar: _properties




@end


#endif