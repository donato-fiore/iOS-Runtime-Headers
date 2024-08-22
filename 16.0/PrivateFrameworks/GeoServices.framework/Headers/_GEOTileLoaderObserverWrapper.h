// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTILELOADEROBSERVERWRAPPER_H
#define _GEOTILELOADEROBSERVERWRAPPER_H

@protocol GEOTileLoaderObserver;

#import <Foundation/Foundation.h>


@interface _GEOTileLoaderObserverWrapper : NSObject {
    id<GEOTileLoaderObserver> *_observer;
    BOOL _implementsLoadedKeyWithSize;
    BOOL _implementsLoadedKeyWithoutSize;
    BOOL _implementsFailedToLoadKey;
}






@end


#endif