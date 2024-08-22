// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RECLASSLOADER_H
#define RECLASSLOADER_H

@class NSArray;
@protocol NSCopying, REClassLoaderConfiguration;

#import <Foundation/Foundation.h>


@interface REClassLoader : NSObject <NSCopying>

 {
    NSArray *_cachedDataSources;
    NSArray *_cachedBundleConfigurations;
    os_unfair_lock_s _loadingLock;
}


@property (readonly, nonatomic) NSObject<REClassLoaderConfiguration> *configuration; // ivar: _configuration


+(id)groupLoaderWithLoaders:(id)arg0 ;
// +(id)loaderWithBlock:(id)arg0 configuration:(unk)arg1  ;
+(id)loaderWithDirectories:(id)arg0 dataSourceKey:(id)arg1 configuration:(id)arg2 ;
+(id)loaderWithObjects:(id)arg0 configuration:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_enumerateBundleConfigurations:(id)arg0 ;
-(void)_enumerateClassesWithBlock:(id)arg0 ;
-(void)enumerateBundleConfigurations:(id)arg0 ;
-(void)enumerateClassesWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;
-(void)prewarm;


@end


#endif