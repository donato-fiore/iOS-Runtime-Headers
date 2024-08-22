// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDISTRIBUTABLEARCHIVEOUTPUTSTREAM_H
#define TSPDISTRIBUTABLEARCHIVEOUTPUTSTREAM_H

@protocol SFUSimpleOutputStream;

#import <Foundation/Foundation.h>


@interface TSPDistributableArchiveOutputStream : NSObject {
    id<SFUSimpleOutputStream> *_outputStream;
    NSInteger _offset;
    BOOL _doneWritingObjectEntries;
    BOOL _doneWritingFileDescriptorProtos;
    BOOL _doneWritingClassInfoMap;
    BOOL _descriptorsEnabled;
    BOOL _tocEnabled;
}




-(BOOL)writeEntry:(id)arg0 offset:(*NSInteger)arg1 headerLength:(*unsigned int)arg2 error:(*id)arg3 ;
-(id)initWithOutputStream:(id)arg0 checkCrc:(unsigned int)arg1 enableDescriptors:(BOOL)arg2 enableToc:(BOOL)arg3 closedCleanly:(BOOL)arg4 archivedVersions:(struct ? )arg5 ;


@end


#endif