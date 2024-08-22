// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBJECTCACHEBYCSTRING_H
#define OBJECTCACHEBYCSTRING_H


#import <Foundation/Foundation.h>


@interface ObjectCacheByCString : NSObject {
    *__CFDictionary _dictionary;
}




-(id)getObjectForCStringKey:(char *)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg0 forCStringKey:(char *)arg1 ;


@end


#endif