// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIVEFSAPPLEDOUBLE_H
#define LIVEFSAPPLEDOUBLE_H

@class NSMutableData, NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "LiveFSAppleDoubleManager.h"

@interface LiveFSAppleDouble : NSObject {
    int _pid;
    BOOL _weCreatedFile;
    NSUInteger _baseFileID;
    _LIFileAttributes _ADFileAttributes;
    NSMutableData *_ADHeaderBuffer;
    NSUInteger _ADBufferHeaderBytesValid;
    NSUInteger _IOSize;
    BOOL _ADFileOpen;
    BOOL _ADFileOK;
    char * _rawAD;
    *apple_double_header _filehdr;
    *apple_double_entry _finderinfo;
    *apple_double_entry _rsrcfork;
    *attr_header _attrhdr;
    *attr_entry _attr_entry;
    BOOL _emptyfinderinfo;
    BOOL _readonly;
    BOOL _lookupFailed;
}


@property (retain) NSString *baseFileHandle; // ivar: _baseFileHandle
@property (retain) NSString *fileHandle; // ivar: fileHandle
@property (retain) NSString *fileName; // ivar: fileName
@property (retain) LiveFSAppleDoubleManager *manager; // ivar: manager
@property (retain) NSString *parentDirHandle; // ivar: parentDirHandle
@property (readonly) int purpose; // ivar: _purpose
@property (retain) NSObject<OS_dispatch_semaphore> *syncSem; // ivar: syncSem


-(BOOL)containerFileExists;
-(id)allXattrNamesAndPosixError:(*int)arg0 ;
-(id)description;
-(id)initWithManager:(id)arg0 baseFileHandle:(id)arg1 name:(id)arg2 andDirectoryHandle:(id)arg3 andPID:(int)arg4 andPurpose:(int)arg5 ;
-(id)valueForXattrNamed:(id)arg0 posixError:(*int)arg1 ;
-(int)closeFile;
-(int)createFile;
-(int)linkFileToDirectory:(id)arg0 andName:(id)arg1 ;
-(int)loadADHeader;
-(int)lookupFile;
-(int)openFile;
-(int)removeFile;
-(int)removeXattrNamed:(id)arg0 ;
-(int)renameFileToDirectory:(id)arg0 andName:(id)arg1 ;
-(int)setValue:(id)arg0 forXattrNamed:(id)arg1 how:(int)arg2 ;
-(int)writeXattrInfo;
-(void)dealloc;
-(void)initEmptyResourceFork:(struct rsrcfork_header *)arg0 ;
-(void)loadAttrHeader;
-(void)reclaimFile;
-(void)shiftDataDownAtOffset:(unsigned int)arg0 lengh:(unsigned int)arg1 howMuch:(NSUInteger)arg2 ;
-(void)shiftDataUp:(NSInteger)arg0 length:(NSUInteger)arg1 howMuch:(NSUInteger)arg2 ;
-(void)swapAttrHeader:(struct attr_header *)arg0 ;
-(void)swapFileHeader:(struct apple_double_header *)arg0 ;


@end


#endif