// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATOMBATCH_H
#define CKATOMBATCH_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CKXBackingStore.h"
#import "CKAtomBatchEnumerationOptions.h"
#import "CKAtomLocation.h"

@interface CKAtomBatch : NSObject

@property (retain, nonatomic) CKXBackingStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) CKAtomBatchEnumerationOptions *enumerationOptions; // ivar: _enumerationOptions
@property (readonly, nonatomic) unsigned char formatVersion;
@property (retain, nonatomic) CKAtomLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger numberOfAtoms;
@property (readonly, nonatomic) ? writerIdentity;


-(id)description;
-(id)descriptionWithAtomValueParser:(id)arg0 ;
-(id)initWithAtomBatch:(id)arg0 enumerationOptions:(id)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithFormatVersion:(unsigned char)arg0 optionsByReaderWriterClass:(id)arg1 enumerationOptions:(id)arg2 location:(id)arg3 data:(id)arg4 error:(*id)arg5 ;
-(id)initWriter;
-(id)initWriterWithAtomLocation:(id)arg0 ;
-(id)initWriterWithAtomLocation:(id)arg0 version:(unsigned char)arg1 ;
-(void)appendAtomWithBlock:(id)arg0 ;
-(void)enumerateAtomsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
-(void)finishWriting;


@end


#endif