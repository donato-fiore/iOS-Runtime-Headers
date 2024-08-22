// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATABASEJOURNALDATABASE_H
#define HDDATABASEJOURNALDATABASE_H

@class NSURL, NSNumber, NSDate, NSString;
@protocol HDJournalChapter;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"
#import "HDKeyValueDomain.h"

@interface HDDatabaseJournalDatabase : NSObject <HDJournalChapter>

 {
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
    NSNumber *_size;
    NSDate *_modificationDate;
    HDKeyValueDomain *_keyValueDomain;
    NSInteger _enumeratedBytesThreshold;
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
@property (copy, nonatomic) id *unitTesting_didCreateDatabaseConnectionHandler; // ivar: _unitTesting_didCreateDatabaseConnectionHandler
@property (retain, nonatomic) HDKeyValueDomain *unitTesting_keyValueDomainOverride; // ivar: _unitTesting_keyValueDomainOverride
@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;


-(BOOL)appendData:(id)arg0 entryClass:(Class)arg1 error:(*id)arg2 ;
-(BOOL)canAppendData:(id)arg0 ;
-(BOOL)createAndOpenForWritingWithError:(*id)arg0 ;
-(BOOL)flushDataToDisk:(*id)arg0 ;
-(BOOL)openForReadingWithError:(*id)arg0 ;
-(BOOL)removeWithError:(*id)arg0 ;
-(id)getIdentifierAndCreationDate:(*id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(unsigned int)enumerateEntriesWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(unsigned int)readVersionWithError:(*id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)unitTesting_setEnumeratedBytesThreshold:(NSInteger)arg0 ;


@end


#endif