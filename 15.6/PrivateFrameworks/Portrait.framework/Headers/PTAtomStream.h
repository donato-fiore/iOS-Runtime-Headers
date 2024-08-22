// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTATOMSTREAM_H
#define PTATOMSTREAM_H

@class NSError;
@protocol PTByteStream;

#import <Foundation/Foundation.h>

#import "PTAtomStream.h"

@interface PTAtomStream : NSObject

@property (readonly, getter=isAtEndOfStream) BOOL atEndOfStream; // ivar: _atEndOfStream
@property (readonly) NSUInteger atomDataOffset; // ivar: _atomDataOffset
@property (readonly) NSUInteger atomDataSize;
@property (readonly) NSUInteger atomFlags; // ivar: _atomFlags
@property (readonly) NSUInteger atomSize; // ivar: _atomSize
@property (readonly) unsigned int atomType; // ivar: _atomType
@property (readonly) NSUInteger atomVersion; // ivar: _atomVersion
@property (readonly) NSObject<PTByteStream> *byteStream; // ivar: _byteStream
@property (readonly) BOOL didReadAtomVersionAndFlags; // ivar: _didReadAtomVersionAndFlags
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSUInteger globalAtomOffset; // ivar: _globalAtomOffset
@property (readonly) NSUInteger globalEndOffset; // ivar: _globalEndOffset
@property (readonly) BOOL hasAtom;
@property (readonly) PTAtomStream *parentStream; // ivar: _parentStream


-(NSUInteger)globalAtomDataOffset;
-(id)_errorForByteStreamError:(id)arg0 ;
-(id)_errorForReadPastLimit:(NSUInteger)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)debugDescription;
-(id)initWithByteStream:(id)arg0 ;
-(id)initWithByteStream:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)initWithParent:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)_debugLogAtomReaderState;
-(void)_debugLogBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)_readAtomHeader;
-(void)_readBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)_setEndOfStream;
-(void)advanceToNextAtom;
-(void)readCurrentAtomDataBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)readCurrentAtomVersionAndFlags;


@end


#endif