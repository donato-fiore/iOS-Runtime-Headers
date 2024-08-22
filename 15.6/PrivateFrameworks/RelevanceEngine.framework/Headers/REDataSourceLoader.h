// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDATASOURCELOADER_H
#define REDATASOURCELOADER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "REClassLoader.h"

@interface REDataSourceLoader : NSObject <NSCopying>

 {
    REClassLoader *_loader;
}




+(id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg0 ;
+(id)dataSourceLoaderWithBlock:(id)arg0 ;
+(id)dataSourceLoaderWithDataSources:(id)arg0 ;
+(id)dataSourceLoaderWithDirectories:(id)arg0 ;
+(id)dataSourceLoaderWithDirectories:(id)arg0 dataSourceKey:(id)arg1 ;
+(id)dataSourceLoaderWithDirectory:(id)arg0 ;
+(id)defaultDataSourceLoader;
+(id)disabledDataSourceLoader;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateBundleConfigurations:(id)arg0 ;
-(void)enumerateDataSourceClassesWithBlock:(id)arg0 ;
-(void)enumerateDataSourceObjectsWithBlock:(id)arg0 ;
-(void)prewarm;


@end


#endif