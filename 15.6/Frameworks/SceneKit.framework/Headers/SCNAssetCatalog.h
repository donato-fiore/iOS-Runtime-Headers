// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNASSETCATALOG_H
#define SCNASSETCATALOG_H

@class NSDictionary, NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface SCNAssetCatalog : NSObject {
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}


@property (readonly, nonatomic) NSURL *catalogURL; // ivar: _catalogURL


+(id)assetCatalogForResourceURL:(id)arg0 ;
+(id)assetCatalogNamed:(id)arg0 ;
+(id)assetCatalogWithURL:(id)arg0 ;
+(id)objectWithName:(id)arg0 class:(Class)arg1 ;
+(id)recursivePathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 ;
+(void)clearCache;
-(id)URLOfResourceNamed:(id)arg0 ;
-(id)actionNamed:(id)arg0 ;
-(id)animationNamed:(id)arg0 ;
-(id)particleSystemNamed:(id)arg0 ;
-(id)pathByMakingURLRelativeToCatalog:(id)arg0 ;
-(id)sceneNamed:(id)arg0 ;
-(id)sceneWithURL:(id)arg0 ;
-(void)cacheObject:(id)arg0 withTimestamp:(CGFloat)arg1 forKey:(id)arg2 ;
-(void)dealloc;


@end


#endif