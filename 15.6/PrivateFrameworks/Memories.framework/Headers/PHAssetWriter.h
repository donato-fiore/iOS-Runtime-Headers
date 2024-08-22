// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETWRITER_H
#define PHASSETWRITER_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PHAssetRepresentation.h"

@interface PHAssetWriter : NSObject

@property (retain, nonatomic) PHAssetRepresentation *assetRepresentation; // ivar: _assetRepresentation
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (nonatomic) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) NSURL *sourceUrl; // ivar: _sourceUrl
@property BOOL stop; // ivar: _stop


+(id)assetWriterForAssetRepresentation:(id)arg0 ;
+(id)assetWriterForIdentifierURL:(id)arg0 ;
-(NSUInteger)estimatedOutputSizeWithError:(*id)arg0 ;
-(id)initWithAssetRepresentation:(id)arg0 ;
-(id)initWithSourceURL:(id)arg0 ;
-(id)request;
-(id)transfer;
-(id)write;
// -(void)startWritingWithProgressHandler:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif