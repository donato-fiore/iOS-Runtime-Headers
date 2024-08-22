// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXVERSIONEDREADERWRITERSTORE_H
#define CKXVERSIONEDREADERWRITERSTORE_H

@class NSDictionary;
@protocol CKXBinding;

#import <Foundation/Foundation.h>

#import "CKXORCReader.h"
#import "CKXORCWriter.h"

@interface CKXVersionedReaderWriterStore : NSObject

@property (retain, nonatomic) NSObject<CKXBinding> *binding; // ivar: _binding
@property (retain, nonatomic) NSDictionary *optionsByReaderWriterClass; // ivar: _optionsByReaderWriterClass
@property (retain, nonatomic) CKXORCReader *orcReader; // ivar: _orcReader
@property (retain, nonatomic) CKXORCWriter *orcWriter; // ivar: _orcWriter


+(BOOL)versionSupported:(unsigned char)arg0 ;
-(id)createReaderForVersionIfNecessary:(unsigned char)arg0 ;
-(id)createWriterForVersionIfNecessary:(unsigned char)arg0 ;
-(id)initWithBinding:(id)arg0 optionsByReaderWriterClass:(id)arg1 ;
-(id)readerForVersion:(unsigned char)arg0 ;
-(id)writerForVersion:(unsigned char)arg0 ;


@end


#endif