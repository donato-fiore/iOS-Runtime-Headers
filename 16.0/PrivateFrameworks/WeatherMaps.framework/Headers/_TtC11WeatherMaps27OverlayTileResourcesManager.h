// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS27OVERLAYTILERESOURCESMANAGER_H
#define _TTC11WEATHERMAPS27OVERLAYTILERESOURCESMANAGER_H

@class SwiftObject;



@interface _TtC11WeatherMaps27OverlayTileResourcesManager : SwiftObject {
    ? tileLoaderFactory;
    ? store;
    ? tileLoaderDebugger;
    ? lock;
    ? resourcesFetchQueue;
    ? resourcesPurgeQueue;
    ? textureLoaderQueue;
    ? maxCacheWeight;
    ? tileLoaders;
    ? cacheWeight;
    ? cache;
    ? purgeableResources;
    ? isPurgingCache;
    ? $__lazy_storage_$_useFallForwardTiles;
}




-(void)didReceiveMemoryWarning;


@end


#endif