// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXPROMISEDSTREAMINGZIPTRANSFER_H
#define IXPROMISEDSTREAMINGZIPTRANSFER_H

@class NSString, SZExtractor;
@protocol SZExtractorDelegate, NSSecureCoding, SZExtractor;


#import "IXOwnedDataPromise.h"
#import "IXPromisedStreamingZipTransferSeed.h"

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor>



@property (nonatomic) NSUInteger archiveBytesConsumed;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (retain, nonatomic) SZExtractor *extractor; // ivar: _extractor
@property (weak, nonatomic) NSObject<SZExtractorDelegate> *extractorDelegate; // ivar: _extractorDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsConsume; // ivar: _needsConsume
@property (readonly, nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property (retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useProgressFromSZExtractor;


+(BOOL)supportsSecureCoding;
-(BOOL)consumeExtractedDataIfNeeded;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 streamingZipOptions:(id)arg2 archiveSize:(NSUInteger)arg3 diskSpaceNeeded:(NSUInteger)arg4 ;
-(id)initWithSeed:(id)arg0 ;
-(void)_prepareForExtractionToPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)addArchiveBytesConsumed:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractionCompleteAtArchivePath:(id)arg0 ;
-(void)extractionEnteredPassThroughMode;
-(void)finishStreamWithCompletionBlock:(id)arg0 ;
-(void)prepareForExtraction:(id)arg0 ;
-(void)prepareForExtractionToPath:(id)arg0 completionBlock:(id)arg1 ;
-(void)resetWithCompletion:(id)arg0 ;
-(void)setExtractionProgress:(CGFloat)arg0 ;
-(void)supplyBytes:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)suspendStreamWithCompletionBlock:(id)arg0 ;
-(void)terminateStreamWithError:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif