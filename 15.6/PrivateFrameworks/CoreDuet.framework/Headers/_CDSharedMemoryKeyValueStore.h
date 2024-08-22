// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDSHAREDMEMORYKEYVALUESTORE_H
#define _CDSHAREDMEMORYKEYVALUESTORE_H

@class NSMutableDictionary;
@protocol _CDStringKeyDataValueStoring, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_archivingQueue;
    BOOL _needToPersist;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dictionary;
    *void _mappedMem;
}


@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(NSUInteger)defaultSize;
+(id)defaultName;
+(id)keyValueStoreWithName:(id)arg0 size:(NSUInteger)arg1 ;
+(id)sharedInstance;
-(*void)memoryPointer;
-(BOOL)removeDataForKey:(id)arg0 ;
-(BOOL)removeDataForKeys:(id)arg0 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 completionBlock:(id)arg2 ;
-(id)allKeys;
-(id)dataForKey:(id)arg0 ;
-(id)description;
-(id)valueForKey:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif