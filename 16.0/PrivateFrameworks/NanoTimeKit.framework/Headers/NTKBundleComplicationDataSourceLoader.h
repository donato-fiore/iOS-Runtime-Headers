// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBUNDLECOMPLICATIONDATASOURCELOADER_H
#define NTKBUNDLECOMPLICATIONDATASOURCELOADER_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying>

 {
    NSArray *_cachedDataSources;
    os_unfair_lock_s _cachedDataSourcesLock;
}




+(id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg0 ;
+(id)complicationDataSourceLoaderWithBlock:(id)arg0 ;
+(id)complicationDataSourceLoaderWithDirectories:(id)arg0 ;
+(id)complicationDataSourceLoaderWithDirectory:(id)arg0 ;
+(id)defaultComplicationDataSourceLoader;
+(id)disabledComplicationDataSourceLoader;
-(id)cachedDataSources;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_loadClassesUsingBlock:(id)arg0 ;
-(void)enumerationComplicationClassesWithBlock:(id)arg0 ;


@end


#endif