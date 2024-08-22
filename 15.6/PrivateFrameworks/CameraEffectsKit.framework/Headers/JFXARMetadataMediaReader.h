// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXARMETADATAMEDIAREADER_H
#define JFXARMETADATAMEDIAREADER_H

@class NSString, NSError;
@protocol JFXMediaMetadataReader, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "JFXARMetadataMediaReaderItem.h"

@interface JFXARMetadataMediaReader : NSObject <JFXMediaMetadataReader>



@property (retain, nonatomic) JFXARMetadataMediaReaderItem *cachedARMetadata; // ivar: _cachedARMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) NSError *lastDecodeError; // ivar: _lastDecodeError
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ? readableTimeRange;
@property (readonly, nonatomic) NSObject<JFXMediaMetadataReader> *reader; // ivar: _reader
@property (readonly, nonatomic) NSUInteger signPostID;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue


+(void)initialize;
-(BOOL)beginReading;
-(BOOL)beginReadingAtTimeRange:(struct ? )arg0 ;
-(id)JFX_ARMetadataFromMetadataReaderItem:(id)arg0 ;
-(id)arMetadataItemForTime:(struct ? )arg0 ;
-(id)initWithMetadataReader:(id)arg0 ;
-(id)metadataForTime:(struct ? )arg0 ;


@end


#endif