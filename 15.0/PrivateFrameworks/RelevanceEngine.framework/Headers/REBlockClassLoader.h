// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REBLOCKCLASSLOADER_H
#define REBLOCKCLASSLOADER_H



#import "REClassLoader.h"

@interface REBlockClassLoader : REClassLoader {
    id *_block;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithBlock:(id)arg0 configuration:(unk)arg1  ;
-(void)_enumerateBundleConfigurations:(id)arg0 ;
-(void)_enumerateClassesWithBlock:(id)arg0 ;


@end


#endif