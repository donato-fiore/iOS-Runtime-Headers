// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RERELEVANCEPROVIDERMANAGERLOADER_H
#define RERELEVANCEPROVIDERMANAGERLOADER_H


#import <Foundation/Foundation.h>

#import "REClassLoader.h"

@interface RERelevanceProviderManagerLoader : NSObject {
    REClassLoader *_loader;
}




+(id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg0 ;
+(id)disabledRelevanceProviderManagerLoader;
+(id)relevanceProviderManagerLoaderWithBlock:(id)arg0 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg0 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg0 relevanceProviderManagerKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateBundleConfigurations:(id)arg0 ;
-(void)enumerationDataSourceClassesWithBlock:(id)arg0 ;
-(void)prewarm;


@end


#endif