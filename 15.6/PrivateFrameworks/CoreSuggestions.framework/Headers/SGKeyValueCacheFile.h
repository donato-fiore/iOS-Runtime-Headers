// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGKEYVALUECACHEFILE_H
#define SGKEYVALUECACHEFILE_H

@class NSData, NSString, NSMutableData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SGKeyValueCacheFile.h"

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding>

 {
    _opaque_pthread_mutex_t _lock;
    NSData *_data;
    int _fd;
    NSString *_path;
    NSString *_tmpDir;
    NSMutableData *_memStore;
    SGKeyValueCacheFile *_other;
}




+(BOOL)supportsSecureCoding;
+(id)encodedStringForFullName:(id)arg0 ;
+(id)fullNameForEncodedContact:(id)arg0 ;
+(id)keyValueCacheForPath:(id)arg0 ;
+(id)pathToCache;
+(void)clearCacheAtPath:(id)arg0 ;
-(id)_map;
-(id)description;
-(id)init;
-(id)initBlank;
-(id)initInMemory;
-(id)initTemporaryForOverwritingCache:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 found:(*BOOL)arg1 ;
-(void)commitTemporaryFile;
-(void)dealloc;
-(void)deleteValueByRecordId:(id)arg0 ;
-(void)deleteValueByRecordIdSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 fromRecordId:(id)arg2 ;
-(void)setValueIfNotPresent:(id)arg0 forKey:(id)arg1 fromRecordId:(id)arg2 ;
-(void)setValueIfNotPresentWithDict:(id)arg0 fromRecordId:(id)arg1 ;


@end


#endif