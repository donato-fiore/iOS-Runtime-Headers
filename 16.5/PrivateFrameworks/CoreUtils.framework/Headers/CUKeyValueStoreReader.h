// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUKEYVALUESTOREREADER_H
#define CUKEYVALUESTOREREADER_H


#import <Foundation/Foundation.h>


@interface CUKeyValueStoreReader : NSObject {
    cdb _cdb;
    int _fd;
    Class _keyType;
    Class _valueType;
}




-(BOOL)enumerateKeyType:(Class)arg0 valueType:(Class)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)enumerateKeysAndValuesAndReturnError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)enumerateValuesForKey:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateValuesForKey:(id)arg0 valueType:(Class)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)openAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)valueExistsForKey:(id)arg0 ;
-(id)_readObjectAtOffset:(unsigned int)arg0 length:(unsigned int)arg1 type:(Class)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithKeyType:(Class)arg0 valueType:(Class)arg1 ;
-(id)valueForKey:(id)arg0 error:(*id)arg1 ;
-(id)valueForKey:(id)arg0 valueType:(Class)arg1 error:(*id)arg2 ;
-(void)close;
-(void)dealloc;


@end


#endif