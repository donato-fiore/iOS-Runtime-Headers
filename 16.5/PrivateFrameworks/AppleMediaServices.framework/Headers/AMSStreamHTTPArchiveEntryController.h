// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSTREAMHTTPARCHIVEENTRYCONTROLLER_H
#define AMSSTREAMHTTPARCHIVEENTRYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface AMSStreamHTTPArchiveEntryController : NSObject



+(BOOL)_shouldWriteEntryDirectlyToDiskForURLString:(id)arg0 ;
+(BOOL)_writeData:(id)arg0 enumeratingBytesToStream:(id)arg1 ;
+(BOOL)_writeFooterToStream:(id)arg0 ;
+(BOOL)_writeHeaderToStream:(id)arg0 ;
+(id)_createNewFileWithError:(*id)arg0 outputDirectory:(id)arg1 forCombining:(BOOL)arg2 ;
+(id)_footerData;
+(id)_harFileURLsInPath:(id)arg0 ;
+(id)_headerData;
+(id)ams_combineEntriesForPath:(id)arg0 error:(*id)arg1 ;
+(id)buffer;
+(void)_performCombiningFiles:(id)arg0 toStream:(id)arg1 ;
+(void)_periodicCleanup;
+(void)_streamToDiskWithEntries:(id)arg0 ;
+(void)_updateMaxBufferSize;
+(void)_writeEntries:(id)arg0 toStream:(id)arg1 ;
+(void)ams_addEntriesForTaskInfo:(id)arg0 ;
+(void)ams_streamEntriesToDisk;
+(void)initialize;


@end


#endif