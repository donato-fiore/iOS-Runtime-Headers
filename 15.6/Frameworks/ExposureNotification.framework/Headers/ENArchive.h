// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENARCHIVE_H
#define ENARCHIVE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENArchive : NSObject {
    *archive _archive;
    *archive_entry _entry;
    *__sFILE _fileHandle;
}


@property (readonly, nonatomic) BOOL endOfArchive; // ivar: _endOfArchive
@property (readonly, nonatomic) unsigned short entryFileType;
@property (readonly, copy, nonatomic) NSString *entryPath;


-(BOOL)_checkEntryAndReturnError:(*id)arg0 ;
-(BOOL)_openArchiveAndReturnError:(*id)arg0 ;
-(BOOL)advanceEntryAndReturnError:(*id)arg0 ;
-(BOOL)readDataIntoBuffer:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)resetAndReturnError:(*id)arg0 ;
-(BOOL)resetToCurrentEntryAndReturnError:(*id)arg0 ;
-(BOOL)skipBytes:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)readDataIntoBuffer:(*void)arg0 maxLength:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithFD:(int)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(void)_closeArchive;
-(void)close;
-(void)dealloc;


@end


#endif