// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCLUSTERINGLOGGER_H
#define VNCLUSTERINGLOGGER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface VNClusteringLogger : NSObject

@property (readonly) NSString *fileNameBase; // ivar: _fileNameBase
@property (readonly) BOOL logEnabled; // ivar: _logEnabled
@property (readonly) NSURL *logFileURL; // ivar: _logFileURL
@property (readonly) NSURL *logFolderURL; // ivar: _logFolderURL


+(BOOL)isLogEnabled;
+(id)currentDateTime;
+(id)padStringWithSpaces:(id)arg0 toSize:(NSInteger)arg1 ;
+(void)appendString:(id)arg0 toLogFile:(id)arg1 ;
-(id)initWithOptions:(id)arg0 logEnabled:(BOOL)arg1 ;
-(id)initWithOptions:(id)arg0 logEnabled:(BOOL)arg1 logFileNameBase:(id)arg2 ;
-(void)logClusterLookupMapL0:(*void)arg0 ;
-(void)logClusterLookupMapL1:(*void)arg0 ;
-(void)logClusterMap:(*void)arg0 level:(id)arg1 ;
-(void)logClusterMapL0:(*void)arg0 ;
-(void)logClusterMapL1:(*void)arg0 ;
-(void)logString:(id)arg0 ;
-(void)resetFileNameURLWithCurentDateTime;


@end


#endif