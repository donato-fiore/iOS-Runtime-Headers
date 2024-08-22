// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LOCALIZEDIMAGECACHE_H
#define _LOCALIZEDIMAGECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary *_cache;
}




-(id)imageForKey:(id)arg0 ;
-(id)init;
-(void)_localeChanged;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setImage:(id)arg0 forKey:(id)arg1 ;


@end


#endif