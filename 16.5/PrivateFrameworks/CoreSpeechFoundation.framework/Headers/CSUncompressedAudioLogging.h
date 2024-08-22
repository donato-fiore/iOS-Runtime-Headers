// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSUNCOMPRESSEDAUDIOLOGGING_H
#define CSUNCOMPRESSEDAUDIOLOGGING_H

@class NSFileHandle, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSUncompressedAudioLogging : NSObject

@property (retain, nonatomic) NSFileHandle *audioFileHandle; // ivar: _audioFileHandle
@property (retain, nonatomic) NSString *audioFilePath; // ivar: _audioFilePath
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *plistFilePath; // ivar: _plistFilePath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (retain, nonatomic) NSString *samplingDate; // ivar: _samplingDate
@property (retain, nonatomic) NSString *samplingDirectory; // ivar: _samplingDirectory
@property (retain, nonatomic) NSString *samplingTimestamp; // ivar: _samplingTimestamp
@property (retain, nonatomic) NSString *samplingTimestampDetail; // ivar: _samplingTimestampDetail
@property (retain, nonatomic) NSString *tmpAudioFilePath; // ivar: _tmpAudioFilePath
@property (retain, nonatomic) NSString *tmpDirectory; // ivar: _tmpDirectory


-(BOOL)_prepareFileForLogging;
-(BOOL)_setupFilePath;
-(id)initWithRequestId:(id)arg0 languageCode:(id)arg1 ;
-(int)_createFileDescriptor:(id)arg0 protectionClass:(int)arg1 ;
-(void)_moveAudioLoggingToCollectionDirectory;
-(void)_removeTmpAudioFile;
-(void)_writePlistFile;
-(void)appendAudioData:(id)arg0 ;
-(void)cancelAudioLogging;
-(void)endAudioWithCancellation:(BOOL)arg0 ;
-(void)prepareLogging;


@end


#endif