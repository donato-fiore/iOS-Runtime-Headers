// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSCENERENDERCACHEOBJECT_H
#define TSCH3DSCENERENDERCACHEOBJECT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DSceneRenderCacheObject : NSObject {
    BOOL _cachingEnabled;
    NSMutableArray *_dynamicResources;
    NSMutableArray *_childCacheObjects;
}


@property (nonatomic) BOOL cachingEnabled;


+(id)cacheObject;
-(NSUInteger)resourceCount;
-(id)childCacheObjectAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)resourceAtIndex:(NSUInteger)arg0 ;
-(id)resourceAtIndex:(NSUInteger)arg0 created:(*BOOL)arg1 ifAbsent:(id)arg2 ;
-(int)p_resourceUpdateFlag;
-(void)allocateDynamicResourcesIntoArray:(id)arg0 ;
-(void)flushCache;
-(void)p_updateResourceUpdateFlags:(int)arg0 ;


@end


#endif