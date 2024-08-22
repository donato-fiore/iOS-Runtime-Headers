// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKARCHIVECREATOR_H
#define _HKARCHIVECREATOR_H

@class NSURL, NSError, NSFileHandle;
@protocol _HKArchiveWriter;

#import <Foundation/Foundation.h>


@interface _HKArchiveCreator : NSObject <_HKArchiveWriter>

 {
    *archive _archive;
}


@property (readonly, copy, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle


+(BOOL)archiveContentsOfDirectoryAtURL:(id)arg0 archiveURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)archiveIsValid;
-(NSInteger)writeData:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)initWithFileHandle:(id)arg0 archiveType:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 archiveType:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 fileHandle:(id)arg1 archiveType:(NSInteger)arg2 ;
-(void)_addDataOfSize:(NSInteger)arg0 toPathInArchive:(id)arg1 fromByteProvider:(id)arg2 ;
-(void)_closeArchiveWithError:(id)arg0 ;
-(void)addDataToArchive:(id)arg0 pathInArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg0 pathInArchive:(id)arg1 ;
-(void)closeArchive;
-(void)dealloc;


@end


#endif