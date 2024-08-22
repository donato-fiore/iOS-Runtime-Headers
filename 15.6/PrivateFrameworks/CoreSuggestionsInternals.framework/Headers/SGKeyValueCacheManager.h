// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGKEYVALUECACHEMANAGER_H
#define SGKEYVALUECACHEMANAGER_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGKeyValueCacheManager : NSObject {
    NSString *_basePath;
    NSMutableArray *_cacheFiles;
    _opaque_pthread_mutex_t _lock;
}




-(id)cacheOfType:(NSUInteger)arg0 ;
-(id)init;
-(id)initInMemory;
-(id)initWithBasePath:(id)arg0 ;
-(void)deleteValueByRecordId:(id)arg0 ;
-(void)deleteValueByRecordIdSet:(id)arg0 ;
-(void)replaceCacheOfType:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif