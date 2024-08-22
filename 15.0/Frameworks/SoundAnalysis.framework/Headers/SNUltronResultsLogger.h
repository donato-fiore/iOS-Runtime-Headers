// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNULTRONRESULTSLOGGER_H
#define SNULTRONRESULTSLOGGER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SNUltronResultsLogger : NSObject {
    NSString *_dateString;
    NSString *_soundIdentifier;
    BOOL _wroteResults;
    ? _startingTime;
}


@property (readonly) NSArray *detectionResults; // ivar: _detectionResults
@property (readonly) NSString *directoryPath; // ivar: _directoryPath
@property (readonly) NSString *fileNameWithoutExtension; // ivar: _fileNameWithoutExtension


+(BOOL)writeDictionaryAsJSON:(id)arg0 fileNameWithoutExtension:(id)arg1 directoryPath:(id)arg2 error:(*id)arg3 ;
+(id)createUltronFinalDictionaryWithDetectionResults:(id)arg0 dateString:(id)arg1 fileNameWithoutExtension:(id)arg2 soundIdenfifier:(id)arg3 frameCount:(NSInteger)arg4 ;
+(id)createUltronResultsDictionaryFromDetectionResults:(id)arg0 ;
-(BOOL)writeResultsToFileWithAudioFrameCount:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithDirectoryPath:(id)arg0 fileNameWithoutExtension:(id)arg1 dateString:(id)arg2 soundIdentifier:(id)arg3 ;
-(void)addResult:(id)arg0 ;


@end


#endif