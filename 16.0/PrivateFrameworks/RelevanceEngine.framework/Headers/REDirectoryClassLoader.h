// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDIRECTORYCLASSLOADER_H
#define REDIRECTORYCLASSLOADER_H

@class NSArray, NSString;


#import "REClassLoader.h"

@interface REDirectoryClassLoader : REClassLoader {
    NSArray *_urls;
    NSString *_key;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDirectories:(id)arg0 dataSourceKey:(id)arg1 configuration:(id)arg2 ;
-(void)_enumerateBundleConfigurations:(id)arg0 ;
-(void)_enumerateBundles:(id)arg0 ;
-(void)_enumerateClassesWithBlock:(id)arg0 ;


@end


#endif