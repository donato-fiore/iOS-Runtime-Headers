// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASELEGACYJOURNALFILE_H
#define HDDATABASELEGACYJOURNALFILE_H

@class NSURL, NSFileHandle, NSString;
@protocol HDJournalChapter;

#import <Foundation/Foundation.h>


@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter>

 {
    NSURL *_URL;
    NSFileHandle *_fileHandle;
    unsigned int _version;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, copy, nonatomic) NSString *journalPath;
@property (readonly, nonatomic) CGFloat modificationTime;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger size;
@property (readonly) Class superclass;


-(BOOL)appendData:(id)arg0 entryClass:(Class)arg1 error:(*id)arg2 ;
-(BOOL)canAppendData:(id)arg0 ;
-(BOOL)createAndOpenForWritingWithError:(*id)arg0 ;
-(BOOL)flushDataToDisk:(*id)arg0 ;
-(BOOL)openForReadingWithError:(*id)arg0 ;
-(BOOL)removeWithError:(*id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(unsigned int)enumerateEntriesWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(unsigned int)readVersionWithError:(*id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif