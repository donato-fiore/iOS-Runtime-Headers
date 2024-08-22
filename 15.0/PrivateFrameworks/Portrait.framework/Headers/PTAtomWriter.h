// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTATOMWRITER_H
#define PTATOMWRITER_H

@class NSError;
@protocol PTByteWriter;

#import <Foundation/Foundation.h>

#import "PTAtomWriter.h"

@interface PTAtomWriter : NSObject

@property (readonly) NSUInteger atomDataOffset; // ivar: _atomDataOffset
@property (readonly) NSUInteger atomDataSize;
@property (readonly) NSUInteger atomSize; // ivar: _atomSize
@property (readonly) unsigned int atomType; // ivar: _atomType
@property (readonly) NSObject<PTByteWriter> *byteWriter; // ivar: _byteWriter
@property (readonly) BOOL didBeginAtom; // ivar: _didBeginAtom
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSUInteger globalAtomDataOffset;
@property (readonly) NSUInteger globalAtomOffset; // ivar: _globalAtomOffset
@property (readonly) PTAtomWriter *parentWriter; // ivar: _parentWriter


-(id)_errorForByteWriterError:(id)arg0 ;
-(id)_errorForSize:(NSUInteger)arg0 ;
-(id)_errorForVersion:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithByteWriter:(id)arg0 ;
-(id)initWithParent:(id)arg0 ;
-(void)_appendBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)_debugLogAtomWriterState;
-(void)_debugLogBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)_debugLogBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)_writeBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)appendBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)appendVersion:(NSUInteger)arg0 flags:(NSUInteger)arg1 ;
-(void)beginAtomOfType:(unsigned int)arg0 ;
-(void)endAtom;


@end


#endif