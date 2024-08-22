// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENFILE_H
#define ENFILE_H

@class NSMutableDictionary, NSMutableData, NSDictionary, NSData;

#import <Foundation/Foundation.h>

#import "ENArchive.h"
#import "ENProtobufCoder.h"

@interface ENFile : NSObject {
    ENArchive *_archive;
    *__sFILE _fileHandle;
    NSUInteger _keyIndex;
    BOOL _reading;
    unsigned int _metadataFlags;
    NSMutableDictionary *_mutableMetadata;
    NSMutableData *_outputData;
    ENProtobufCoder *_protobufCoder;
    ENProtobufCoder *_tekProtobufCoder;
}


@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSData *sha256Data; // ivar: _sha256Data


-(BOOL)_readHashFromArchive:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readHashFromFile:(struct __sFILE *)arg0 error:(*id)arg1 ;
-(BOOL)_readHeaderFromFile:(struct __sFILE *)arg0 error:(*id)arg1 ;
-(BOOL)_readMetadataFromArchive:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readMetadataFromCoder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readMetadataFromFileHandle:(struct __sFILE *)arg0 error:(*id)arg1 ;
-(BOOL)_readPrepareAndReturnError:(*id)arg0 ;
-(BOOL)_resetAndReadHeaderFromArchive:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeMetadataAndReturnError:(*id)arg0 ;
-(BOOL)_writePrepareAndReturnError:(*id)arg0 ;
-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)openForWritingToData:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithArchive:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithFD:(int)arg0 reading:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)openWithFileSystemRepresentation:(char *)arg0 reading:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeTEK:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeTEK:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_readKeyWithPtr:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)readTEKAndReturnError:(*id)arg0 ;
-(id)readTEKWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif