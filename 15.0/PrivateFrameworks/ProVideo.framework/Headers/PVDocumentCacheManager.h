// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVDOCUMENTCACHEMANAGER_H
#define PVDOCUMENTCACHEMANAGER_H

@class NSCache, NSString;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface PVDocumentCacheManager : NSObject <NSCacheDelegate>

 {
    NSCache *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)releaseSharedInstance;
+(void)removeAllEffects;
-(*void)getOZXDocumentForKey:(id)arg0 ;
-(*void)newOZXDocumentForKey:(id)arg0 ;
-(id)generateKeyFromFilePathString:(id)arg0 ;
-(id)init;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)cacheOZXDocument:(*void)arg0 forKey:(id)arg1 timeElapsed:(CGFloat)arg2 memoryInfo:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setCountLimit:(NSUInteger)arg0 ;
-(void)setTotalCostLimit:(NSUInteger)arg0 ;


@end


#endif