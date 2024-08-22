// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFRWSAMPLEBUFFERCHANNEL_H
#define PFRWSAMPLEBUFFERCHANNEL_H

@class AVAssetWriterInputPixelBufferAdaptor, AVAssetReaderOutput, AVAssetWriterInput;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFRWSampleBufferChannel : NSObject {
    id *completionHandler;
    NSObject<OS_dispatch_queue> *serializationQueue;
}


@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor; // ivar: _adaptor
@property (retain, nonatomic) AVAssetReaderOutput *assetReaderOutput; // ivar: _assetReaderOutput
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput; // ivar: _assetWriterInput
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL useAdaptor; // ivar: _useAdaptor


-(id)init;
-(id)initWithAssetReaderOutput:(id)arg0 assetWriterInput:(id)arg1 useAdaptor:(BOOL)arg2 ;
-(void)callCompletionHandlerIfNecessary;
-(void)cancel;
-(void)startWithDelegate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif