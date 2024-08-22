// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALFILE_H
#define PLJOURNALFILE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PLJournal.h"

@interface PLJournalFile : NSObject

@property (weak, nonatomic) PLJournal *journal; // ivar: _journal
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)copyURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)createEmptyURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)fileExistsAtURL:(id)arg0 ;
+(BOOL)moveURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)writeData:(id)arg0 toURL:(id)arg1 atomically:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_fileSize:(*NSUInteger)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)allocatedFileSize:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)appendEntries:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)createEmptyFileWithError:(*id)arg0 ;
// -(BOOL)enumerateEntriesUsingBlock:(id)arg0 decodePayload:(unk)arg1 error:(BOOL)arg2  ;
-(BOOL)fileExists;
-(BOOL)fileSize:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)moveToURL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)openForReadingUsingBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)openForWritingUsingBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)removeFileWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 journal:(id)arg1 ;


@end


#endif