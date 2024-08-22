// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDISTRIBUTABLEWRITER_H
#define TSPDISTRIBUTABLEWRITER_H


#import <Foundation/Foundation.h>

#import "TSPDistributableArchiveOutputStream.h"
#import "TSPDatabase.h"
#import "TSPDistributableFileManager.h"

@interface TSPDistributableWriter : NSObject {
    TSPDistributableArchiveOutputStream *_outputStream;
    *void _encodedIds;
    *void _typesSeen;
    uint8_t _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    NSUInteger _processedEntriesCount;
}




-(BOOL)_processEntry:(id)arg0 tocEntries:(id)arg1 progressContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)goAndReportProgress:(BOOL)arg0 error:(*id)arg1 context:(id)arg2 ;
-(id)_initWithDatabase:(id)arg0 fileManager:(id)arg1 outputStream:(id)arg2 checkCrc:(unsigned int)arg3 includeToc:(BOOL)arg4 ;
-(id)initWithTangierPath:(id)arg0 fileManager:(id)arg1 outputStream:(id)arg2 checkCrc:(unsigned int)arg3 ;
-(void)cancel;
-(void)dealloc;


@end


#endif