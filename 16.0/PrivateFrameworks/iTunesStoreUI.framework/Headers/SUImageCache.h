// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUIMAGECACHE_H
#define SUIMAGECACHE_H

@class CPLRUDictionary;

#import <Foundation/Foundation.h>


@interface SUImageCache : NSObject {
    CPLRUDictionary *_dictionary;
}




-(id)imageForURL:(id)arg0 dataProvider:(id)arg1 ;
-(id)init;
-(id)initWithMaximumCapacity:(NSInteger)arg0 ;
-(void)addImage:(id)arg0 forURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)dealloc;
-(void)removeAllCachedImages;


@end


#endif