// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGENERICFILEBASEDCACHE_H
#define ATXGENERICFILEBASEDCACHE_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface ATXGenericFileBasedCache : NSObject {
    NSObject<OS_os_log> *_loggingHandle;
    NSString *_debugName;
}


@property (readonly, copy, nonatomic) NSString *cacheFilePath; // ivar: _cacheFilePath


-(BOOL)storeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSecureCodedObject:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCacheFilePath:(id)arg0 loggingHandle:(id)arg1 debugName:(id)arg2 ;
-(id)readSecureCodedObjectWithMaxValidAge:(CGFloat)arg0 allowableClasses:(id)arg1 error:(*id)arg2 ;
-(id)readWithMaxValidAge:(CGFloat)arg0 error:(*id)arg1 ;
-(void)evict;


@end


#endif