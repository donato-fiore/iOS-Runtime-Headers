// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAFORMATCONVERSIONSINGLEPASSVIDEOPROGRESSOBSERVER_H
#define PHMEDIAFORMATCONVERSIONSINGLEPASSVIDEOPROGRESSOBSERVER_H

@class NSFileHandle, NSURL, NSProgress;

#import <Foundation/Foundation.h>

#import "PHMediaFormatConversionRequest.h"

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject

@property NSUInteger lastFileSize; // ivar: _lastFileSize
@property (retain) NSFileHandle *observedFileHandle; // ivar: _observedFileHandle
@property (retain) NSURL *observedFileURL; // ivar: _observedFileURL
@property (weak) NSProgress *progress; // ivar: _progress
@property (weak) PHMediaFormatConversionRequest *request; // ivar: _request


-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingProgress:(id)arg0 forRequest:(id)arg1 ;
-(void)stopObserving;


@end


#endif