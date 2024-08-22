// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXDEPTHDATAMEDIAREADER_H
#define JFXDEPTHDATAMEDIAREADER_H

@class NSString, NSError;
@protocol JFXMediaVideoTrackReader, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "JFXMediaReaderDepthData.h"
#import "JFXDepthDecompressor.h"

@interface JFXDepthDataMediaReader : NSObject <JFXMediaVideoTrackReader>



@property (retain, nonatomic) JFXMediaReaderDepthData *cachedDepthData; // ivar: _cachedDepthData
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) JFXDepthDecompressor *depthDecompressor; // ivar: _depthDecompressor
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) NSError *lastDecodeError; // ivar: _lastDecodeError
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ? readableTimeRange;
@property (readonly, nonatomic) NSObject<JFXMediaVideoTrackReader> *reader; // ivar: _reader
@property (readonly, nonatomic) NSUInteger signPostID;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue


-(BOOL)beginReading;
-(BOOL)beginReadingAtTimeRange:(struct ? )arg0 ;
-(id)JFX_cachedDepthDataForTime:(struct ? )arg0 ;
-(id)JFX_decompressAVDepthDataFromVideoTrackReaderSample:(id)arg0 ;
-(id)JFX_readDepthDataForTime:(struct ? )arg0 ;
-(id)depthDataForTime:(struct ? )arg0 ;
-(id)initWithVideoTrackReader:(id)arg0 ;
-(id)videoSampleForTime:(struct ? )arg0 ;


@end


#endif