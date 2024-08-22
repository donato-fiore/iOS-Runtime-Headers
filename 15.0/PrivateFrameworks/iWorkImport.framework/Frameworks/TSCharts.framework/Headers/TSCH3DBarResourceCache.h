// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DBARRESOURCECACHE_H
#define TSCH3DBARRESOURCECACHE_H

@class TSUNoCopyDictionary;

#import <Foundation/Foundation.h>


@interface TSCH3DBarResourceCache : NSObject {
    TSUNoCopyDictionary *_cache;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)barWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;
+(id)instance;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)p_barWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;


@end


#endif