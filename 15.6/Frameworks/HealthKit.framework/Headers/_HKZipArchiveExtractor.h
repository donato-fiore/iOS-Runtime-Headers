// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKZIPARCHIVEEXTRACTOR_H
#define _HKZIPARCHIVEEXTRACTOR_H

@class NSString, NSData, NSFileHandle, NSError;

#import <Foundation/Foundation.h>


@interface _HKZipArchiveExtractor : NSObject {
    NSString *_pathname;
    NSData *_archiveData;
    NSFileHandle *_fileHandle;
    *archive _archive;
    *archive_entry _entry;
    BOOL _dataRead;
    NSData *_data;
    NSError *_lastError;
    BOOL _hasCalculatedNumberOfEntries;
    NSUInteger _numberOfEntries;
}




-(BOOL)_enumerateLinesInCurrentEntryWithBlock:(id)arg0 ;
-(BOOL)enumerateLinesInCurrentEntryWithError:(*id)arg0 block:(id)arg1 ;
-(NSUInteger)numberOfEntries;
-(id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(NSUInteger)arg0 ;
-(id)_getDataForCurrentEntryWithSize:(NSUInteger)arg0 ;
-(id)getDataForCurrentEntry;
-(id)getDataForCurrentEntryWithMaxSizeBytes:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFileHandle:(id)arg0 pathname:(id)arg1 ;
-(id)initWithPathname:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)lastError;
-(void)_clearState;
-(void)_logError:(id)arg0 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;


@end


#endif