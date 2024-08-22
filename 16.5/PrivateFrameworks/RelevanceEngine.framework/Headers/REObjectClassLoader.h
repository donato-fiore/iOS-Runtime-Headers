// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REOBJECTCLASSLOADER_H
#define REOBJECTCLASSLOADER_H

@class NSArray;


#import "REClassLoader.h"

@interface REObjectClassLoader : REClassLoader {
    NSArray *_objects;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjects:(id)arg0 configuration:(id)arg1 ;
-(void)_enumerateClassesWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;


@end


#endif