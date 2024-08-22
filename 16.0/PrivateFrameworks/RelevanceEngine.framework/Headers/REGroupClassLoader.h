// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REGROUPCLASSLOADER_H
#define REGROUPCLASSLOADER_H

@class NSOrderedSet;


#import "REClassLoader.h"

@interface REGroupClassLoader : REClassLoader {
    NSOrderedSet *_loaders;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLoaders:(id)arg0 ;
-(void)_enumerateBundleConfigurations:(id)arg0 ;
-(void)_enumerateClassesWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;


@end


#endif