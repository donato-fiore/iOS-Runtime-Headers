// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSDIAGNOSTICSERVICE_H
#define VSDIAGNOSTICSERVICE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VSDiagnosticService : NSObject

@property (retain, nonatomic) NSDictionary *audioDumpFileAttributes; // ivar: _audioDumpFileAttributes
@property (retain, nonatomic) NSString *audioDumpPath; // ivar: _audioDumpPath


+(id)defaultService;
-(NSUInteger)totalDiagnosticFileSize;
-(id)initWithDirectory:(id)arg0 ;
-(void)collectTailspin:(id)arg0 ;
-(void)createDirectoryIfNeeded;
-(void)dumpCompressedAudio:(id)arg0 forRequest:(id)arg1 ;
-(void)dumpInstrumentMetrics:(id)arg0 withTimestamp:(NSInteger)arg1 ;
-(void)dumpStreamAudio:(id)arg0 forRequest:(id)arg1 ;
-(void)removeDirectory;
-(void)removeOldFiles;


@end


#endif