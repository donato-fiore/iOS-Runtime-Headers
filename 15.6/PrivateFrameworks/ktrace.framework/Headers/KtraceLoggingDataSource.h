// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTRACELOGGINGDATASOURCE_H
#define KTRACELOGGINGDATASOURCE_H

@class NSData;
@protocol OSLogEventDeserializerDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface KtraceLoggingDataSource : NSObject <OSLogEventDeserializerDataSourceDelegate>



@property (nonatomic) *ktrace_file _ktfile; // ivar: _ktfile
@property (retain, nonatomic) NSData *_metadata; // ivar: _metadata
@property (nonatomic) *ktrace_chunk _nextChunk; // ivar: _nextChunk
@property (nonatomic) BOOL _skipFirst; // ivar: _skipFirst


-(?)initWithKtraceFile;
-(id)metadataChunk;
-(id)nextEventDataChunk;
-(void)dealloc;


@end


#endif