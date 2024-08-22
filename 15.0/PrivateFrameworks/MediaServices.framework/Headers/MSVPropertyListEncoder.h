// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVPROPERTYLISTENCODER_H
#define MSVPROPERTYLISTENCODER_H

@class NSData, NSMutableArray, NSDateFormatter, NSMutableData, NSFileHandle, NSMutableString;

#import <Foundation/Foundation.h>


@interface MSVPropertyListEncoder : NSObject

@property (readonly, nonatomic) NSData *arrayClosingTagData; // ivar: _arrayClosingTagData
@property (readonly, nonatomic) NSData *arrayOpeningTagData; // ivar: _arrayOpeningTagData
@property (readonly, nonatomic) NSData *boolFalseTagData; // ivar: _boolFalseTagData
@property (readonly, nonatomic) NSData *boolTrueTagData; // ivar: _boolTrueTagData
@property (retain, nonatomic) NSMutableArray *containerStack; // ivar: _containerStack
@property (readonly, nonatomic) NSData *dataClosingTagData; // ivar: _dataClosingTagData
@property (readonly, nonatomic) NSData *dataOpeningTagData; // ivar: _dataOpeningTagData
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, nonatomic) NSData *dictionaryClosingTagData; // ivar: _dictionaryClosingTagData
@property (readonly, nonatomic) NSData *dictionaryOpeningTagData; // ivar: _dictionaryOpeningTagData
@property (readonly, nonatomic) NSData *keyClosingTagData; // ivar: _keyClosingTagData
@property (readonly, nonatomic) NSData *keyOpeningTagData; // ivar: _keyOpeningTagData
@property (retain, nonatomic) NSMutableData *outputBuffer; // ivar: _outputBuffer
@property (retain, nonatomic) NSFileHandle *outputFileHandle; // ivar: _outputFileHandle
@property (readonly, nonatomic) NSData *stringClosingTagData; // ivar: _stringClosingTagData
@property (readonly, nonatomic) NSData *stringOpeningTagData; // ivar: _stringOpeningTagData
@property (retain, nonatomic) NSMutableString *tabPrefix; // ivar: _tabPrefix
@property (retain, nonatomic) NSData *tabPrefixData; // ivar: _tabPrefixData


-(id)init;
-(id)initWithOutputFileHandle:(id)arg0 ;
-(void)_addObject:(id)arg0 ;
-(void)_decrementTabPrefix;
-(void)_encodeData:(id)arg0 ;
-(void)_encodeDate:(id)arg0 ;
-(void)_encodeNumber:(id)arg0 ;
-(void)_encodeString:(id)arg0 ;
-(void)_flushOutputBuffer;
-(void)_incrementTabPrefix;
-(void)_startArray;
-(void)_startDictionary;
-(void)_writeData:(id)arg0 ;
-(void)_writeDictionaryKey:(id)arg0 ;
-(void)_writeString:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)close;
-(void)endArray;
-(void)endDictionary;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)startArray;
-(void)startArrayForKey:(id)arg0 ;
-(void)startDictionary;
-(void)startDictionaryForKey:(id)arg0 ;


@end


#endif